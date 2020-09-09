/*
 ============================================================================
 Name        : Tp1.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "blibliotecasjls.h"

int main(void) {

	int primerNumero;
	int segundoNumero;
	int resultado;
	float resultadoFloat;
	int reintentos;
	reintentos = 3;

	if (ingreseNumeros(reintentos, &primerNumero) == 0) {
		if (ingreseNumeros(reintentos, &segundoNumero) == 0) {
			if (funcionSumar(primerNumero, segundoNumero, &resultado) == 0) {
				printf("El resultado de la suma es: %d ", resultado);
			}

			if (funcionResta(primerNumero, segundoNumero, &resultado) == 0) {
				printf("\nEl resultado de la resta es: %d ", resultado);
			}

			if (funcionMultiplicacion(primerNumero, segundoNumero, &resultado)
					== 0) {
				printf("\nEl resultado de la multiplicacion es: %d ",
						resultado);
			}

			if (funcionDivision(primerNumero, segundoNumero, &resultadoFloat)
					== 0) {
				printf("\nEl resultado de la division es: %2.f ",
						resultadoFloat);
			}

			if (funcionFactorial(primerNumero, &resultado) == 0) {
				printf("\nEl factorial de : %d , es: %d ", primerNumero,
						resultado);
			}
			if (funcionFactorial(segundoNumero, &resultado) == 0) {
				printf("\nEl factorial de : %d , es: %d ", segundoNumero,
						resultado);
			}
		} else {
			printf("\nAlgo salio mal en la toma del segundo numero ");
		}

	} else {
		printf("\nAlgo salio mal en la toma del primer numero ");
	}

	return EXIT_SUCCESS;
}
