#include <stdio.h>
// crear carpeta es comando (dm nombre de la carpeta) (rem nombre de la carpeta y el nuevo nombre) (eliminar carpeta es rd nombre de la carpeta) 
int main ()
{
    int n;

    printf("Ingrese un valor entero:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        printf("%d \n", i);
    }
    


    return 0;
}