/*
 ============================================================================
 Name        : TP1.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description :
 ============================================================================

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

#include <stdio.h> //entrada y salida
#include <stdlib.h> //conversion de tipos
#include <math.h> //Funciones matematicas



int main(void) {

	//Declarando variables
	 int a,b;
	 int r=0;//resultado
	 int x;
	 //Entrada
	 printf("Ingresar 1 SI ES SUMA\nIngresar 2 SI ES RESTA\nIngresar 3 SI ES MULTIPLICACION\nIngresar 4 SI ES DIVISION\n"); scanf("%i",&x);
	 //Proceso
	 if (x==1){
	 printf("Ingresar N1 \n"); scanf("%i",&a);
	 printf("Ingresar N2 \n"); scanf("%i",&b);
	 r=a+b;
	}
	 else if (x==2){
	 printf("Ingresar N1 \n"); scanf("%i",&a);
	 printf("Ingresar N2 \n"); scanf("%i",&b);
	 r=a-b;
	 }
	 else if(x==3){
	 printf("Ingresar N1 \n"); scanf("%i",&a);
	 printf("Ingresar N2 \n"); scanf("%i",&b);
	 r=a*b;
	 }
	 else if(x==4){
	 printf("Ingresar N1 \n"); scanf("%i",&a);
	 printf("Ingresar N2 \n"); scanf("%i",&b);
	 r=a/b;
	 }
	 //Salida
	 printf("La respuesta es: %i.\n",r);
	 system("pause");

	 return 0;

}
