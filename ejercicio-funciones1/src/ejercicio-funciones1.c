/*
 ============================================================================
 Name        : ejercicio-funciones1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*pedir al usuario dos numeros float
 * funci�n sumar
 * funci�n restar
 * funci�n multiplicar
 * funci�n dividir
 *
 * todas las funciones en casp de exito return 0 y en caso de error return -1
 */

#include <stdio.h>
#include <stdlib.h>

int suma(int numA, int numB);
int resta(int numA, int numB);
int multiplicar(int numA, int numB);
int dividir(int operadoA, int numB, float *resultado);

int main(void) {
	setbuf(stdout, NULL);
	float numUno;
	float numDos;
	float resultadoSuma;
	float resultadoResta;
	float resultadoMultiplicacion;
	float resultadoDivision;



	if(getFloat("\nIngrese el primer operando: ","\nError, Ingrese un numero: ",2,&numUno) == 0)
	{
		if(getFloat("\nIngrese el segundo operando: ","\nError, Ingrese un numero: ",2,&numDos) == 0)
		{
			if (sumar(numUno, numDos, &resultadoSuma) == 0) {
					printf("\nEl resultado de la suma es: %.2f", resultadoSuma);
					fflush(stdin);
				} else {
				    printf("\nAlgo salio mal");
				    fflush(stdin);
				}
				if (restar(numUno, numDos, &resultadoResta) == 0) {
					printf("\nEl resultado de la resta es: %.2f", resultadoResta);
					fflush(stdin);
				} else {
				    printf("\nAlgo salio mal");
				}
				if (dividir(numUno, numDos, &resultadoDivision) == 0) {
					printf("\nEl resultado de la division es: %.2f", resultadoDivision);
				} else {
					printf("\nNo se puede dividir por 0");
					fflush(stdin);
				}
				if (multiplicar(numUno, numDos, &resultadoMultiplicacion) == 0) {
					printf("\nEl resultado de la multiplicacion es: %.2f",
							resultadoMultiplicacion);
					fflush(stdin);
				}else {
					printf("\nAlgo salio mal");
					fflush(stdin);
				}
		}

	}

	return EXIT_SUCCESS;
}

int sumar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA + operadorB;
	retorno = 0;

	return retorno;
}
int restar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA - operadorB;
	retorno = 0;

	return retorno;
}
int multiplicar(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	*pResultado = operadorA * operadorB;
	retorno = 0;

	return retorno;
}
int dividir(float operadorA, float operadorB, float *pResultado) {

	int retorno = -1;

	if (operadorB != 0) {
		*pResultado = operadorA / operadorB;
		retorno = 0;
	}

	return retorno;
}
