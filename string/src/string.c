/*
 ============================================================================
 Name        : string.c
 Author      : ED
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "utn.h"
#include "funcion_maximo.h"

//Sentencia de precompilador
#define CANTIDAD_ELEMENTOS 4

int main(void) {
	int variableInt;
	char aMensaje[200];
	int arrayInt[CANTIDAD_ELEMENTOS];
	int flagCargaCorrecta = 0;
	int maximo;

	for(int i=0; i < CANTIDAD_ELEMENTOS ; i++)
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
		if(calcularMaximo(arrayInt,CANTIDAD_ELEMENTOS,&maximo) == 0)
		{
			printf("\nEl maximo es: %d", maximo);
		}
		else
		{
			printf("Error");
		}
	}
	return EXIT_SUCCESS;
}
