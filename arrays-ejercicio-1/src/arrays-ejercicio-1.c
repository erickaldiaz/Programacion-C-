/*
 ============================================================================
 Name        : arrays-ejercicio-1.c
 Author      : ED
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
 * 1) Se tiene el siguiente array de variables del tipo int
int numeros[12]={3,7,4,5,2,3,7,1,7,3,2,7};
Hacer una funcion que reciba el array y su tamaño, y lo imprima. Escribir un programa para probar la funcion.


 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(void) {
	setbuf(stdout,NULL);
	char nombre[11] = "JUAN"; // '\0' 11 posiciones. Utiles 10 y un lugar para el \0
	char auxiliar[3];
	//strncy(nombre, "Maria"); // La manera de copiar dentro de nombre el string maria
	//strcpy(auxiliar, nombre);//funcion insegura. la manera segura es strncpy

	strncpy(auxiliar, nombre, sizeof(auxiliar)); //sizeof devuelve el tamaño fisico.ej me devuelve que nombre mide 11



	return EXIT_SUCCESS;
}


