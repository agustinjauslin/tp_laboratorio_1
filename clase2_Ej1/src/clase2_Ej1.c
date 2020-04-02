/*
*   -Realizar un programa que solicite cinco números e imprima por pantalla el
*    promedio, el máximo y el mínimo.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int numeroIngresado;
	int numMax;
	int numMin;
	int contador=0;
	int acumulador=0;
	float promedio;

	for(contador=0;contador<5;contador++)
	{
		printf("ingrese un numero:\n");
		fflush(stdin);
		scanf("%d",&numeroIngresado);
		if(contador==0)
		{
			numMax=numeroIngresado;
			numMin=numeroIngresado;
		}
		else
		{
			if(numeroIngresado>numMax)
			{
				numMax=numeroIngresado;
			}
			else
			{
				if(numeroIngresado<numMin)
				{
					numMin=numeroIngresado;
				}
			}
		}
		acumulador=acumulador+numeroIngresado;

	}
	promedio=(float)acumulador/contador;

	printf("el promedio de los numeros ingresados es %.3f\n",promedio);
	printf("el numero maximo es %d\n",numMax);
	printf("el numero minimo es %d \n",numMin);


	return EXIT_SUCCESS;
}
