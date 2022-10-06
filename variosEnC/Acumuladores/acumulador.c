// crear carpeta es comando (md nombre de la carpeta)
// (rem nombre de la carpeta y el nuevo nombre) (copy con nombre del archivo.c o "text"  crear archivo ) 
//(eliminar carpeta es rd nombre de la carpeta)
#include <stdio.h>

int main()
{
    int i,n;

    printf("Ingrese un nuemro entero: \n ");
    scanf("%d",&n);
    i=0;
    while(n!=0)
    {
        printf("%d \n",i);
        printf("************************************************");
        i=i+n;
        printf("************************************************");
        printf("%d \n", i);

        printf("Ingrese un nuemro entero: \n ");
        scanf("%d", &n);
    }

    printf("La suma es: %d \n ",i);

 return 0;
}
