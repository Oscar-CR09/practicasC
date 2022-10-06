#include <stdio.h>

int main ()
{
    char nota;
    printf("Introdusca calificacion (A-F) y pulse intro:\n");
    scanf("%c", &nota);

    switch(nota)
    {
        case 'A':   puts("Excelente. Examen superado");
        break;
        case 'B': puts("Notable. Suficiencia");
        break;
        case 'C': puts("Aprobado.");
        break;
        case 'F': puts("Reprobado");
        break;
        default:
        puts("No es posible esta nota.");
        break;
    }

    puts("\nFinal del programa:");
    return 0;

}