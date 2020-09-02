/*
 ============================================================================
 Name        : funciones-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sumaEnteros(int operadoA, int operadorB);
int dividirEnteros(int operadoA, int operadorB, float *resultado);

int main(void) {
	setbuf(stdout, NULL);
	float numero;

	if(dividirEnteros(14,22,&numero) == 0){
		printf("%f", numero);
		fflush(stdin);
	}
	return EXIT_SUCCESS;
}
int sumaEnteros(int operadoA, int operadorB){

	int resultado;
	resultado = operadoA + operadorB;
	return resultado;
}
int dividirEnteros(int operadoA, int operadorB, float *resultado){

	float retorno;
	if(operadorB != 0){
		*resultado = (float) operadoA / operadorB;
		retorno = 0;
	}
	else
	{
		retorno = -1;
	}
	return retorno;

}

