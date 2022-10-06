// crear carpeta es comando (md nombre de la carpeta) (rem nombre de la carpeta y el nuevo nombre) (eliminar carpeta es rd nombre de la carpeta)

#include <stdio.h>

int main() 
{
    int i,n;

    printf("Ingrese un numero entero:");
    scanf("%d",&n);

     i = 0;
    while (i<n)
    {
        printf("%d ",i);
        i=i+1;
    }
    return 0;
}