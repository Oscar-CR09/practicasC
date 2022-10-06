#include <stdio.h>
#include <math.h>

int main ()
{
    float f,x; 
    printf("Elije un valor a x:\n");
    scanf("%f",&x);

    if(x<=0.0)
    {
        f=pow(x,2)-x;
    }
    else
    {
        f=-pow(x,2)+3*x;
        printf("f(%.lf)=%.3f",x,f);
    }

    return 0;
}