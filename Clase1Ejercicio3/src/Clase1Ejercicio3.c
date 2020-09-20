/*
 ============================================================================
 Name        : Clase1Ejercicio3.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Clase 1 Ejercicio 3
 ============================================================================

 Agregar al programa adjunto la funcionalidad resaltada con un (*)

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

int main (int arfc, char *argv[])
{

	int numero1,numero2;
	int resultado;
	int resultadoPositivo;
	int resultadoNegativo;


	printf("\n Introdusca el valor del operador 1: ");
	scanf("%d",&numero1);
	printf("\n Introdusca el valor del operador 1: ");
	scanf("%d",&numero2);

	resultado = numero1 - numero2;
	printf("\n La resta de %d y %d es: %d", numero1, numero2, resultado);

	if(resultado>0)
	{
		printf("\n El resultado es Positivo",resultadoPositivo);
	}
	else
	{
		printf("\n El resultado es Negativo",resultadoNegativo);
	}


	return 0;
}
