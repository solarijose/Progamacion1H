/*
 ============================================================================
 Name        : Clase1Ejercicio4.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 Escribir un programa que realice las siguientes acciones:

    - Solicite al usuario 10 números
    - Calcule cuántos son negativos y cuantos son positivos
    - Muestre por pantalla la cantidad de negativos y la cantidad de positivos


 */

#include <stdio.h>
#include <stdlib.h>

int main (int arfc, char *argv[])
{

	int numero;
	int resultadoPositivo;
	int resultadoNegativo;
	int acumuladorPositivo=0;
	int acumuladorNegativo=0;
	int i;

	for (i=0; i < 10; ++i)
	{
		printf("\nIntrodusca un numero Positivo o Negativo: ");
		scanf("%d",&numero);

		if(numero>0)
		{
			acumuladorPositivo++;
			resultadoPositivo=acumuladorPositivo;
		}
		if(numero<0)
		{
			acumuladorNegativo++;
			resultadoNegativo=acumuladorNegativo;
		}
	}
	printf("\n La cantidad de resultados positivos es: %d",resultadoPositivo);
	printf("\n La cantidad de resultados negativos es: %d",resultadoNegativo);
}
