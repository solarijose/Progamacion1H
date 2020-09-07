/*
 ============================================================================
 Name        : Ejercicio1Sabado.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

Ejercicio 01:
Se pide una cantidad indeterminada de edades enteras,
informar:
el máximo ingresado
el mínimo ingresado
el promedio
la cantidad de edades ingresadas

Ejercicio 02:
Al ejercicio anterior :
Ademas de la edad ingresar el estado civil de la persona ( 's' para soltera , 'c' para casada, 'd' divorciada)
ademas de informar lo anterior ....informar:
la persona mas joven de las casadas
a persona mas Vieja de las solteras
de los estados civiles , cual fue el mas ingresado


 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int edad;
	int maximoIngresado;
	int minimoIngresado;
	float promedio;
	char respuesta;
	int cantidadEdades;
	int respuestaScanf;
	char estadoCivil;
	int acumulador = 0;
	int contador = 0;
	int casadoMasJoven;
	int solteroMasViejo;
	int contadorSolteros = 0;
	int contadorCasados = 0;
	int contadorDivorciados = 0;



	do
	{
		//Ingreso edad con validación
		printf("\nIngrese edad:");
		__fpurge(stdin);
		respuestaScanf = scanf("%d", &edad);
		while(respuestaScanf == 0 && (edad < 1 || edad > 100))
		{
			printf("Error, ingrese una edad valida:");
			__fpurge(stdin);
			respuestaScanf = scanf("%d", &edad);
		}

		//Ingreso estado civil con validación
		do
		{
			printf("\nIngrese un estado civil valido ('s' para soltera , 'c' para casada, 'd' divorciada):");
			__fpurge(stdin);
			respuestaScanf = scanf("%c", &estadoCivil);
		}while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'd');

		// el máximo ingresado y el mínimo ingresado
		if(contador == 0 || edad > maximoIngresado)
		{
			maximoIngresado = edad;
		}
		if(contador == 0 || edad < minimoIngresado)
		{
			minimoIngresado = edad;
		}

		// la persona mas joven de las casadas y la persona mas Vieja de las solteras,
		switch(estadoCivil)
		{
			case 's':
				contadorSolteros++;
				if(contador == 0 || edad > solteroMasViejo)
				{
					solteroMasViejo = edad;
				}
				break;
			case 'c':
				contadorCasados++;
				if(contador == 0 || edad < casadoMasJoven)
				{
					casadoMasJoven = edad;
				}
				break;
			case 'd':
				contadorDivorciados++;
				break;
		}

		// la cantidad de edades ingresadas
		acumulador = acumulador + edad;
		contador++;

		do
		{
			printf("\n¿Desea continuar? (s/n)");
			__fpurge(stdin);
			scanf("%c", &respuesta);
		}while(respuesta !='s' && respuesta !='n');

	}while(respuesta == 's');

	// el promedio
	promedio = (float)acumulador / contador;

	// de los estados civiles , cual fue el mas ingresado


	//Muestro resultados en pantalla.
	printf("\nLa edad maxima es: %d",maximoIngresado);
	printf("\nLa edad minima es: %d",minimoIngresado);
	printf("\nEl promedio de edad es %.2f", promedio);
	printf("\nLa cantidad de edades ingresadas es %d", contador);
	printf("\nLa persona casada mas joven tiene %d años",casadoMasJoven);
	printf("\nLa persona soltera mas vieja tiene %d años,",solteroMasViejo);

	// de los estados civiles , cual fue el mas ingresado
	if(contadorSolteros > contadorCasados && contadorSolteros > contadorDivorciados)
	{
		printf("\nEl estado civil mas ingresado es Soltero.");
	}
	else
	{
		if(contadorCasados > contadorSolteros && contadorCasados > contadorDivorciados)
		{
			printf("\nEl estado civil mas ingresado es Casado.");
		}
		else
		{
			if(contadorDivorciados > contadorSolteros && contadorDivorciados > contadorCasados)
			{
				printf("\nEl estado civil mas ingresado es Divorciado.");
			}
		}
	}
}




