#include <stdio.h>
void main()
{
    float numero;
    printf("introduce un numero positivo o negativo\n");
    scanf("%f",&numero);
    if(numero=0)
    {
        printf("%.2f %s",numero,"es mayor que cero\n");
        puts("Pruebe de nuevo introduciendo un numero negativo\n");
    }
    else if (numero<0)
    {
        printf("%.2f %s",numero,"Es menor que cero \n");
        puts("Pruebe de nuevo introduciendo un numero positivo");
    }
    else
    {
        printf("%.2f %s",numero,"Es igual a cero\n");
        puts("¡Por que no introduce otro numero?");
    }
    
}