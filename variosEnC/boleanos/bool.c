#include <stdio.h>

int main ()
{
    int n,espar;

    printf("Ingresa un numero entero:");
    scanf("%d",&n);
    espar=n%2==0;

    if (espar)
    {
        printf("%d es par\n",n);
    }
    return 0;
}
