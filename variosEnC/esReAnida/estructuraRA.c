#include <stdio.h>

int main()
{   
    int n, esprimo;
    int num, cont;

    printf("Cuantos primos quieres ver: \n");
    scanf("%d", &n);

    num=1;
    cont=0;

    while (cont<n)
    {
        esprimo=1;


    for (int i=2;i<num && esprimo; i++)
    {
        if (num%i==0)
        {
            esprimo=0;
        }
        
    }

    if (esprimo)
    {
        printf("%d\n",num);
        cont=cont+1;
    }

    num=num+1;
    
    }   
    
}