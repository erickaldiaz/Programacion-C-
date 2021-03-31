/*
 ============================================================================
 Name        : tp-clase-arrays.c
 Author      : ED
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "utn.h"

int arr_calcularMaximoInt(int array[],int limite, int* resultado);
int arr_calcularMinimoInt(int* array,int limite, int* resultado);
int arr_calcularPromedioInt(int* array,int limite, float* resultado);
int arr_calcularSumaInt(int* array,int limite, float* resultado);

#define CANTIDAD_EDADES 5
int main(void) {
	setbuf(stdout,NULL);

	int edad;

	for(i = 0; i < 5; i++){
			printf("\nIngrese su edad: ");
			fflush(stdin);
			respuestaScan = scanf("%d", &edad);
			while(respuestaScan == 0){
				printf("Error, reingrese su edad");
				fflush(stdin);
				respuestaScan = scanf("%d", &edad);
			}
	return EXIT_SUCCESS;
}
