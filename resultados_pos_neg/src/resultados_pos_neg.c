/*
- Limpie la pantalla
- Solicite dos valores numéricos al usuario distintos de cero *
- Asigne a las variables numero1 y numero2 los valores obtenidos
- Realice la resta de dichas variables
- Muestre el resultado por pantalla
- Muestre por pantalla la leyenda "Resultado positivo" en caso de ser mayor *
- Muestre por pantalla la leyenda "Resultado negativo" si es menor que cero *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout,NULL);
	int num1;
	int num2;
	int resta;

	do
	{
		printf("ingrese un numero\n");
		fflush(stdin);
		scanf("%d",&num1);
	}
	while(num1<1);

	do
	{
		printf("ingrese otro numero\n");
		fflush(stdin);
		scanf("%d",&num2);
	}
	while(num2 < 1);

	resta=num1-num2;
	printf("el resultado es %d \n",resta);
	if(resta<0)
	{
		printf("el resultado es negativo");
	}
	else
	{
		if(resta>0)
			{
				printf("el resultado es positivo");
			}
		else
		{
			printf("el resultado es 0");
		}

	}



	return EXIT_SUCCESS;
}
