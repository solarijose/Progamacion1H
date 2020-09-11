/*
 ============================================================================
 Name        : Tp1.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Trabajo practico 1
 ============================================================================


 1
Enunciado
Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar 1er operando (A=x)
2. Ingresar 2do operando (B=y)
3. Calcular todas las operaciones
a) Calcular la suma (A+B)
b) Calcular la resta (A-B)
c) Calcular la division (A/B)
d) Calcular la multiplicacion (A*B)
e) Calcular el factorial (A!)
4. Informar resultados
a) “El resultado de A+B es: r”
b) “El resultado de A-B es: r”
c) “El resultado de A/B es: r” o “No es posible dividir por cero”
d) “El resultado de A*B es: r”
e) “El factorial de A es: r1 y El factorial de B es: r2”
5. Salir
2
• Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
que contenga las funciones para realizar las cinco operaciones.
• En el menú deberán aparecer los valores actuales cargados en los operandos A y B
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
• Deberán contemplarse los casos de error (división por cero, etc)
• Documentar todas las funciones


 */

#include <stdio.h>
#include <stdlib.h>
#include "blibliotecasjls.h"

int main(void) {


	int operadorA;
	int operadorB;
	int resultado;
	float resultadoFloat;
	int reintentos;
	reintentos = 3;

	if (ingreseNumeros(reintentos, &operadorA) == 0){
		if (ingreseNumeros(reintentos, &operadorB) == 0)
		{
			if (funcionSumar(operadorA, operadorB, &resultado) == 0)
			{
			printf("El resultado de A+B es : %d ", resultado);
			}

			if (funcionResta(operadorA, operadorB, &resultado) == 0)
			{
			printf("\nEl resultado de A-B es: %d ", resultado);
			}

			if (funcionMultiplicacion(operadorA, operadorB, &resultado)== 0)
			{
			 printf("\nEl resultado de A*B es: %d ",resultado);
			}

			if (funcionDivision(operadorA, operadorB, &resultadoFloat)== 0)
			{
			 printf("\nEl resultado de A/B es: %2.f ",resultadoFloat);
			}

			if (funcionFactorial(operadorA, &resultado) == 0)
			{
			 printf("\nEl factorial de A : %d , es: %d ", operadorA,resultado);
			}
			if (funcionFactorial(operadorB, &resultado) == 0)
			{
			 printf("\nEl factorial de B : %d , es: %d ", operadorB,resultado);
			}
		}
			else
			{
			printf("\nAlgo salio mal en la toma del segundo numero ");
			}
	}
			else
			{
				printf("\nAlgo salio mal en la toma del primer numero ");
			}

	return EXIT_SUCCESS;
}

