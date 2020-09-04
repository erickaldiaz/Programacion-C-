/*
 ============================================================================
 Name        : utn_getCaracter.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int utn_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos)
{
	int retorno = -1;
	char buffer;

  if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0){

	  do{
		  printf("%s", mensaje);
		  scanf("%c", &buffer);
		  if(buffer >= minimo && buffer <= maximo){
		  *pResultado = buffer;
		  retorno = 0;
		  }
		  else
		  {
			  printf("%s", mensajeError);
			  reintentos--;
	  }

	  }while(reintentos >= 0);


  }
  return retorno;
}
