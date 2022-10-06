#include <stdio.h>

int main()
{
    int n, suma, contador;
    double prom;

    printf("Ingresa un nuemro entero:\n");
    scanf("%d", &n);

    suma=0;
    contador=0;
    
    while(n!=0) 
    {

        suma = suma + n;
        contador = contador + 1;
        printf("********contador: %d *******\n",contador);
        printf("********suma es: %d *******\n",suma);

        printf("Ingresa un nuemro entero:\n");
        scanf("%d",&n);

    }
    prom=(double)suma/contador;

    printf("El promedio es de: %lf \n",prom);
    printf("De la suma %d \nDe: %d",suma,contador);

}