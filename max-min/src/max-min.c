/*
 ============================================================================
 Name        : max-min.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

int main(void) {
	setbuf(stdout, NULL);

	int maximo;
	int minimo;
	int i;
	int bufferInt;
	int flag = TRUE;

	for(i = 0; i < 5; i++){
		printf("Ingrese un numero %d\n", i+1);
		scanf("%d", &bufferInt);
		if(flag == TRUE){
			maximo = bufferInt;
			minimo = bufferInt;
			flag = FALSE;
		}
		else{
			if(bufferInt > maximo){
				maximo = bufferInt;
			}if(bufferInt < minimo){
				minimo = bufferInt;
			}
		}
	}
	printf("\nEl valor minimo es: %d y el valor maximo es: %d", minimo, maximo);

	return 0;
}
