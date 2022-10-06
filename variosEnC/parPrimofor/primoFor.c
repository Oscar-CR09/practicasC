#include <stdio.h>

int main()
{
    int n, esprimo;

    printf("Ingresa un numero entero:");
    scanf("%d",&n);
    
    esprimo =1;
    for (int i = 2; i < n && esprimo; i++) 
    {
        if (n%i==0) 
        {
            esprimo=0;
        }
    }

    if (esprimo)
    {
        printf("%d Es primo \n", n);
    }
    else
    {
       printf("%d No es primo\n", n);
    }
 
    return 0; 
}