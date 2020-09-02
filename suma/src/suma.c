/*
 ============================================================================
 Name        : suma.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setbuf(stdout, NULL);

	int num1;
	int num2;
	int suma;
	char resultado;

	printf("ingrese un numero\n");
	scanf("%d", &num1);
	printf("ingrese otro numero\n");
		scanf("%d", &num2);

	suma = sumarConLimite(num1, num2);
	printf("la suma es %d", suma);




	return EXIT_SUCCESS;
}
