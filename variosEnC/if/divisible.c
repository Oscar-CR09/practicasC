#include <stdio.h>

int main ()
{
    int n,d;
    printf("Introdusca dos enteros: \n");
    scanf("%d %d",&n,&d);

    if(n%d==0)
    {
        printf("%d es divisible entre %d\n",n,d);
    }
    else
    {
        printf("% no es divisible entre %d\n",n,d);

    }

}