/*
 ============================================================================
 Name        : Clase.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

Pedir al usuario 2 numeros float

Funcion sumar
Funcion restar
Funcion multiplicar
Funcion dividir

Todas las funciones en caso de exito return 0 y en caso de error return -1



 */

#include <stdio.h>
#include <stdlib.h>

int sumar(float operadorA, float operadorB, float *pResultado);
int restar(float operadorA, float operadorB, float *pResultado);
int dividir(float operadorA, float operadorB, float *pResultado);
int multiplicar(float operadorA, float operadorB, float *pResultado);

int main(void)
{

	float numUno;
	float numDos;
	int resultadoScan;
	float resultadoSuma;
	float resultadoResta;
	float resultadoDivision;
	float resultadoMultiplicacion;

	printf("\nIngrese el primer operando: ");
	fflush(stdin);
	resultadoScan = scanf("%f", &numUno);
	while (resultadoScan == 0) {
		printf("\nError, Ingrese un numero: ");
		fflush(stdin);
		resultadoScan = scanf("%f", &numUno);
	}
	printf("\nIngrese el segundo operando: ");
	fflush(stdin);
	resultadoScan = scanf("%f", &numDos);
	while (resultadoScan == 0) {
		printf("\nError, Ingrese un numero: ");
		fflush(stdin);
		resultadoScan = scanf("%f", &numDos);
	}

	if (sumar(numUno, numDos, &resultadoSuma) == 0) {
		printf("\nEl resultado de la suma es: %.2f", resultadoSuma);
	} else {
	    printf("\nAlgo salio mal");
	}
	if (restar(numUno, numDos, &resultadoResta) == 0) {
		printf("\nEl resultado de la resta es: %.2f", resultadoResta);
	} else {
	    printf("\nAlgo salio mal");
	}
	if (dividir(numUno, numDos, &resultadoDivision) == 0) {
		printf("\nEl resultado de la division es: %.2f", resultadoDivision);
	} else {
		printf("\nNo se puede dividir por 0");
	}
	if (multiplicar(numUno, numDos, &resultadoMultiplicacion) == 0) {
		printf("\nEl resultado de la multiplicacion es: %.2f",
				resultadoMultiplicacion);
	}else {
		printf("\nAlgo salio mal");
	}

	return EXIT_SUCCESS;
}

int sumar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA + operadorB;
	retorno = 0;

	return retorno;
}

int restar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA - operadorB;
	retorno = 0;

	return retorno;
}

int dividir(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	if (operadorB != 0) {
		*pResultado = operadorA / operadorB;
		retorno = 0;
	}

	return retorno;
}

int multiplicar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA * operadorB;
	retorno = 0;

	return retorno;
}
