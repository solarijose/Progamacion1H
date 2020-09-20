/*
 ============================================================================
 Name        : Clase8.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 1) Se tiene el siguiente array de variables del tipo int
int numeros[12]={3,7,4,5,2,3,7,1,7,3,2,7};
Hacer una funcion que reciba el array y su tamaño, y lo imprima. Escribir un programa para probar la funcion.

2) Hacer una funcion que reciba el array del punto 1 y su tamaño, y cuente cuantas veces aparece el numero 7.
Al terminar de contar, la funcion deberá imprimir por pantalla el valor contado. Escribir un programa para probar la funcion.


3) Modificar la funcion del punto 2 para que NO imprima el valor contado,
sino que lo devuelva por referencia (recibiendo la direccion de memoria de una variable donde
escribirá el valor contado). Escribir un programa para probar la funcion.


4) Dada la siguiente cadena de caracteres:
char nombre[8]={'p','e','p','e','1','2','3','\0'};
Hacer una funcion que reciba el array y su tamaño, y cuente cuantas veces aparece la letra 'e'.
Al terminar de contar, la funcion deberá imprimir por pantalla el valor contado. E
scribir un programa para probar la funcion.


 */


#include <stdio.h>
#include <stdlib.h>
#define LIMIT_NUMBER 12


int function_printArray(int *pArray, int limite);
int function_ContadorDeLetras(char *pArray, int limite,int *pCantidadDeVeces,char letra_a_evaluar);

int main(void) {
	__fpurge(stdout, NULL);

	char nombre[8]={'p','e','p','e','1','2','3','\0'};

	int resultado=0;

	char letra_a_evaluar='e';

	if(function_ContadorDeLetras(nombre,LIMIT_NUMBER,&resultado,letra_a_evaluar)==0)
	{
		printf("\nExisten %d letras  en su array ",resultado,letra_a_evaluar);
	}else
	{
		printf("Algo salio mal :( ");
	}
	return EXIT_SUCCESS;
}


int function_ContadorDeLetras(char *pArray, int limite,int *pCantidadDeVeces,char letra_a_evaluar) {
	int retorno = -1;
	int indice;
	int contador=0;
	if (pArray != NULL && limite >= 0 && pCantidadDeVeces!=NULL) {
		for (indice = 0; indice < limite; indice++) {
			if(pArray[indice]==letra_a_evaluar)
			{
				contador++;
			}
		}
		*pCantidadDeVeces = contador;
		retorno = 0;
	}
	return retorno;
}



int function_printArray(int *pArray, int limite) {
	int retorno = -1;
	int indice;
	if (pArray != NULL && limite >= 0) {
		for (indice = 0; indice < limite; indice++) {
			printf("\nIndice : %d tiene el valor: %d ", indice, pArray[indice]);
		}
		retorno = 0;

	}
	return retorno;
}

