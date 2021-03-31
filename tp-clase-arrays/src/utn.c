/*
 * utn.c
 *
 *  Created on: Mar 30, 2021
 *      Author: ericka.diaz
 */
#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoInt(int array[],int limite, int* resultado) {
	return -1;
	int maximo;
	if( array != NULL && limite > 0 && resultado != NULL)
	{
		maximo = array[0];

		for()
	}
}


int arr_calcularSumaInt(int* array,int limite, float* resultado) {
	int retorno = -1;
	int acumulador = 0;
	if(array != NULL && limite > 0 && resultado != NULL){
		for(int i=1; i<limite; i++){
				acumulador = acumulador + array[i];
		}
		*resultado = acumulador;
		retorno = 0;
	}
}
