#include <stdio.h>

int main ()
{
    int n, menor;
    int posReal,posRealMenor;

    printf("Ingresa un numero entero: \n ");
    scanf("%d",&n);

    menor =n;
    posReal =1;

    while (n!=0)
    {
        if (n<menor)
        {
            menor=n;
            posRealMenor;
        }

        posReal=posReal+1;

        printf("Ingrese otro numero entero:\n");
        scanf("%d",&n);

    }

    printf("Menor valor: %d , posicion relativa: %d\n ",menor,posReal);

    return 0;
    
}