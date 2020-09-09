/*
 * tp1.c
 *
 *  Created on: 9 sep. 2020
 *      Author: wolf
 */

//esta clase lleva el cuerpo de las funciones.

#include <stdio.h>
#include <stdlib.h>

int funcionSumar(int numero1, int numero2, int *pResultado)
{
	int retorno= -1;
	if(pResultado!=NULL)
	{
		*pResultado=(numero1+numero2);
		retorno=0;
	}
	return retorno;
}

int funcionResta(int numero1, int numero2, int *pResultado)
{
	int retorno= -1;
	if(pResultado!=NULL)
	{
		*pResultado=(numero1-numero2);
		retorno=0;
	}
	return retorno;
}

int funcionMultiplicacion(int numero1, int numero2, int *pResultado)
{
	int retorno= -1;
	if(pResultado!=NULL)
	{
		*pResultado=(numero1*numero2);
		retorno=0;
	}
	return retorno;
}

int funcionDivision(int numero1, int numero2, float *pResultado)
{
	int retorno= -1;
	if(pResultado!=NULL && numero2!=NULL)
	{
		*pResultado=(numero1/numero2);
		retorno=0;
	}
	else
	{
		printf("\nNo se puede dividir por 0");
	}

	return retorno;
}

	int funcionFactorial(int numeroFactorial,int *pResultado)
	{
		int resultadoFactorial=1;
		int repeticiones;
		int retorno = -1;

		if(pResultado!=NULL && numeroFactorial>-1)
		{
			if(numeroFactorial!=0)
			{
				for(repeticiones=numeroFactorial; repeticiones>1; repeticiones--)
				{
					resultadoFactorial=resultadoFactorial*repeticiones;
				}
				retorno = 0;
			}
			else
			{
				resultadoFactorial=1;
				retorno = 0;
			}
		}

		*pResultado=resultadoFactorial;
		return retorno;
	}

	int ingreseNumeros(int reintentos ,int *pResultado)
	{
		int retorno =-1;
		int resultadoScan;
		int bufferFloat;

		while(reintentos>0)
		{
			printf("\nIngrese un numero : ");
			__fpurge(stdin);
			resultadoScan=scanf("%d", &bufferFloat);
			if(resultadoScan==1)
			{
				*pResultado=bufferFloat;
				retorno=0;
				break;
			}
			else
			{
				//printf("Error le quedan %d reintentos" ,reintentos);
				printf("Error reingrese numero");
				reintentos--;
			}
			if(reintentos==0)
			{
				retorno=-1;
			}
		}
		return retorno;
	}




