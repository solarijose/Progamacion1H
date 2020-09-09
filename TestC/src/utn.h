/*
 * utn.h
 *
 *  Created on: 8 sep. 2020
 *      Author: wolf
 */

#ifndef UTN_H_
#define UTN_H_


int getInt(char* mensaje, char* mensajeError, int* pResultado,int reintentos,int maximo,int minimo)

{
	int retorno = -1;
	int bufferInt;
	int resultadoScanf;
	if(		mensaje != NULL &&
			mensajeError != NULL &&
			pResultado != NULL &&
			reintentos >= 0 &&
			maximo >= minimo)
	{
		do
		{
			printf("%s",mensaje);
			__fpurge(stdin);// fflush // __fpurge
			resultadoScanf = scanf("%d" , &bufferInt);
			if(resultadoScanf == 1 && bufferInt >= minimo && bufferInt <= maximo)
			{
				retorno = 0;
				*pResultado = bufferInt;
				break;
			}
			else
			{
				printf("%s",mensajeError);
				reintentos--;
			}
		}while(reintentos >= 0);
	}
	return retorno;
}


#endif /* UTN_H_ */
