#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int n;
	printf("Ingresa un numero para saber si es par o impar:\n");
	scanf("%d",&n);
	
	while (n>0)
	{
		if (n % 2 == 0)
		{
			printf("Es par: %d \n", n);
		}else
		{
			printf("Es impar: %d \n", n);
		}
		
		printf("Ingrese  un numero para saber si es par o impar:\n");
		scanf("%d",&n);
		
	}
	
	return 0;
}

