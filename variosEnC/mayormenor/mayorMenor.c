#include <stdio.h>

int main ()
{

int a,b,c;
int mayor, medio,menor;

printf("Escribe tres valores enteros:");
scanf("%d %d %d ",&a,&b,&c);

if(a>b && a>c){
mayor=a;
medio=b>c?b:c;
menor=b<c?b:c;
}

else if(b>a && b>c)
{
	mayor=b;
	medio=a>c?a:c;
	menor=a<c?a:c;
}

else
{
	mayor=c;
	medio=a>b?a:b;
	menor=a<b?a:b;
}

printf("Mayor es: %d\n",mayor);
printf("Medio es: %d\n", medio);
printf("Menor es: %d\n",menor);

return 0;
}