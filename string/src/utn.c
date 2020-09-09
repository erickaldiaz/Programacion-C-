/**
 * \brief Solicita un entero al usuario
 * \param char* mensaje, Es el mensaje a ser mostrado al usuario
 * \param char* mensaje, Es el mensaje de error a ser mostrado al usuario
 * \param int* pResultado, puntero al espacio de memoria donde se dejara el valor obtenido
 * \param int reintentos, cantidad de oportunidades para ingresar el dato
 * \param int minimo, valor minimo admitido
 * \param int minimo, valor maximo admitido
 * \return (-1) Error / (0) Ok
 *
 */

int getInt(char* mensaje, char* mensajeError, char* pResultado, int minimo, int maximo, int* reintentos){

	int retorno = -1;
	int bufferInt;
	int resultadoScanf;

	   if(	   mensaje!= NULL &&
			   mensajeError!= NULL &&
			   minimo<=maximo &&
			   reintentos>=0 &&
			   pResultado!= NULL){

		   do{
				printf("%s", mensaje);
						resultadoScanf = scanf("%d", &bufferInt);
						if(resultadoScanf == 1 && bufferInt >= minimo && bufferInt <= maximo){
							retorno = 0;
							*pResultado = bufferInt;
							break;
						}
						else{
							printf("%s", mensajeError);
							reintentos--;
						}

		   }while( reintentos >= 0);
	   }
	   return retorno;
}
