/*
- Solicite al usuario 10 números
- Calcule cuántos son negativos y cuantos son positivos
- Muestre por pantalla la cantidad de negativos y la cantidad de positivos
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int i;
	int contadorPositivos=0;
	int contadorNegativos=0;

	for(i=0;i<5;i++)
	{
		printf("ingrese un numero\n");
		fflush(stdin);
		scanf("%d",&numeroIngresado);
		if(numeroIngresado>0)
		{
			contadorPositivos++;
		}
		else
		{
			if(numeroIngresado<0)
			{
				contadorNegativos++;
			}
		}

	}
	printf("los positivos son:%d\n",contadorPositivos);
	printf("los negativos son:%d\n",contadorNegativos);


	return EXIT_SUCCESS;
}
