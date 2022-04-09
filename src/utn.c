/*
 * utn.c
 *
 *  Created on: 17 mar. 2022
 *      Author: moran
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>






/**
 *  \brief solicito un numero al usuario y devuelve el resultado
 *  \param El mensaje que se va a imprimir
 *  \return El numero ingresado por el usuario
 *
*/
int getInt(char mensaje[])
{
	int auxiliar;
	printf("%s", mensaje);
	fflush(stdout);
    scanf("%d",&auxiliar);
	return auxiliar;
}


/**
 *  \brief solicito un numero al usuario y devuelve el resultado
 *  \param El mensaje que se va a imprimir
 *  \return El numero ingresado por el usuario
 *
*/
float getFloat(char mensaje[])
{
	float auxiliar;
	printf("%s", mensaje);
	fflush(stdout);
	scanf("%f",&auxiliar);
	return auxiliar;
}

/**
 *  \brief solicito un caracter al usuario y devuelve el resultado
 *  \param El mensaje que se va a imprimir
 *  \return El caracter ingresado por el usuario
 *
*/
char getChar(char mensaje[])
{
	char auxiliar;
	printf("%s", mensaje);
	fflush(stdout);
	scanf("%c",&auxiliar);
	return auxiliar;
}

/**
 * \brief Genera un número aleatorio
 * \param desde Número aleatorio mínimo
 * \param hasta Número aleatorio máximo
 * \param iniciar Indica si se trata del primer número solicitado 1 indica que si
 * \return retorna el número aleatorio generado
 *
*/
char getNumeroAleatorio(int desde , int hasta, int iniciar)
{
    if(iniciar)
        srand (time(NULL));
    return desde + (rand() % (hasta + 1 - desde));
}
/**
 * \brief realiza una suma
 * \return retorna el valor
 *
*/
int sumar(int operador1,int operador2)//Función para sumas
{
    int resultado;
    resultado= operador1+operador2;
    return resultado;// Retorna el valor
}
/**
 * \brief realiza una resta
 * \return retorna el valor
 *
*/
int restar(int operador1,int operador2)//Función para restar
{
	int resultado;
	resultado= operador1 - operador2;
	return resultado;// Retorna el valor
}
    /**
     * \brief realiza una multiplicacion
     * \return retorna el valor
     *
    */
int multiplicar(int operador1,int operador2)//Función para multiplicar
{
    int resultado;
    resultado= operador1 * operador2;
    return resultado;// Retorna el valor
}
   /**
    * \brief realiza una division
    * \return retorna el valor
    *
   */
int division(int operador1, int operador2, float* pResultado)
{
   	float result;
   	int retorno= -1;

   	if(pResultado!= NULL && operador2!=0)
   	{
   		result= (float) operador1 / operador2;
   		(*pResultado) = result;
   	    retorno= 0;
   	}

   	return retorno;
}


