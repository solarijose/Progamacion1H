/*
 ============================================================================
 Name        : Clase2.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Ejercicio 001
 ============================================================================

 Ejercicio:001
 Realizar un programa que solicite cinco números
 e imprima por pantalla el promedio, el máximo y el mínimo.

 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int minimo;
	int maximo;
	int acumulador;
	int auxiliarInt;
	int i;

	/* Solicito el primer numero el cual por ser el primero sera tanto
	el maximo como el minimo y el primer numero a  ser acumulador
	*/

	printf("Ingrese un numero: ");
	scanf("%d",&auxiliarInt);
	maximo = auxiliarInt;
	minimo = auxiliarInt;
	acumulador = auxiliarInt;

	// Sikucuti ek resto de los numeros
	for (i=0;i<4;++i)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&auxiliarInt);
		acumulador = acumulador + auxiliarInt;

		if(auxiliarInt > maximo) //numero ingresado es mayor al maximo
		{
			maximo = auxiliarInt;  //si se confirma, se guarda en la variable maximo
		}

		if (auxiliarInt < minimo)//numero ingresado es menor al minimo
		{
			minimo = auxiliarInt; //si se confirma, se guarda en la variable minimo
		}
	}
	// %i la variable es tipo ENTERO
	printf("El maximo es: %i\n",maximo);
	printf("El minimo es: %i\n",minimo);
	printf("El promedio es: %i\n",acumulador);
	return 0;
}
