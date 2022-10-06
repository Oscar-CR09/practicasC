#include <stdio.h>

int main ()
{
    int n,mayor;
    printf("Ingrese un numero:\n ");
    scanf("%d",&n);

    mayor=n;

    while (n!=0)
    {
        if(n>mayor)
        {
            mayor=n;
        }
        printf("Ingrese el siguiente numero: \n");
        scanf("%d",&n);
    }

    printf("El mayor es: %d \n" ,mayor);
    
}