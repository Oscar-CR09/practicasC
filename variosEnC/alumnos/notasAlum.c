#include <stdio.h>
#include <string.h>

int main ()
{
    int cantPres, sumaNota, maxNota;
    int matri,nota;
    char nom [11], nomMax[11];

    cantPres=0;
    sumaNota=0;
    maxNota=0;

    printf("Ingresa matricula, nota y nombre:\n");
    scanf("%d %d %s ",&matri,&nota,&nom);

    while (matri!=0) 
    {
        cantPres=cantPres+1;
        sumaNota=sumaNota+nota;

        if (nota>maxNota)
        {
            maxNota=nota;
            strcpy(nomMax,nom);

        }
        printf("Ingrese matricula, nota y nombre:\n");
        scanf("%d %d %s ",&matri,&nota,&nom);
    }
    printf("Cantidad de presentaciones: %d \n",cantPres);
    
    double prom=(double)sumaNota/cantPres;

    printf("Nota promedio: %lf\n",prom);

    printf("Alumno de mejor rendimiento %s, nota: %d \n",nomMax,maxNota);
    
    return(0);
}