#include <stdio.h>

int main()
{
	float n1,n2,resultado;
	char opcion;
	
	printf("\n\t programa que suma y resta dos numeros");
	
	printf("\n\t ingresa (en may%csculas): \n\n\t -S para suma \n\t -R para resta\n\t",163);
	opcion=getchar();
	
	switch(opcion)
	{
		case 'S':
				printf("\tescribe el primer numero:");
				scanf("%f", &n1);
				printf("\tescribe el segundo numero:");
				scanf("%f", &n2);
				resultado=n1+n2;
				printf("\tla suma de %f y %f es: %f",n1,n2,resultado);
		break;
		case 'R':
		break;
		
	}
	
	
}
