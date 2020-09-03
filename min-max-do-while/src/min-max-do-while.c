/*
 ============================================================================
 Name        : min-max-do-while.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 ============================================================================
 Pedir numeros hasta que el usuario quiera(888) y dar como resultado maximo
 y minimo
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
	int bufferInt;
	int flag = TRUE;

	do{
		printf("ingrese un numero:");
		scanf("%d", &bufferInt);
		if(flag == TRUE){
			maximo = bufferInt;
			minimo = bufferInt;
			flag = FALSE;
		}else{
			if(bufferInt > maximo){
				maximo = bufferInt;
			}if(bufferInt < minimo){
				minimo = bufferInt;
			}
		}

	}
	while(bufferInt != 888);
	printf("\n El valor minimo es: %d y el valor máximo es: %d", minimo, maximo);
	return 0;
}
