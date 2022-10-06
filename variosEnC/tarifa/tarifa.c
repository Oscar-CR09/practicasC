#include <stdio.h>
#define TARIFA1 1.2
#define TARIFA2 1.0
#define TARIFA3 0.9

int main ()
{
    float gasto, tasa;
    printf("\nGasto de corriente:");
    scanf("%f", &gasto);
    if (gasto < 1000.0)
    {
        tasa=TARIFA1;
    }
    if (gasto>=1000.0 && gasto <= 1850.0)
    {
        tasa=TARIFA2;
    }
    if (gasto>1850.0)
    {
        tasa=TARIFA3;
    }
    printf("\n Tasa que le corresponde a %.lf kwxh es de %f\n ",gasto,tasa);

    return 0; 
    
}