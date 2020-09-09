/*
 ============================================================================
 Name        : TestC.c
 Author      : Solari José Luis
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "utn.c"

int main(void) {
	int variableInt;
	char aMensaje[200];
	int arrayInt[5];
	int flagCargaCorrecta = 0;
	for(int i=0; i<5; i++)
	{
		sprintf(aMensaje,"Numero %d\n",i+1);
		if(getInt(aMensaje,"Fuera de rango [0-1000]\n",&variableInt,5,1000,0) != 0)
		{
			printf("GAME OVER");
			flagCargaCorrecta = -1;
			break;
		}
		else
		{
			arrayInt[i] = variableInt;
		}
	}
	if(flagCargaCorrecta == 0)
	{

	}
	return EXIT_SUCCESS;
}
