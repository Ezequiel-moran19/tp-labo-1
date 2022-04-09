/*
 * unt.h
 *
 *  Created on: 17 mar. 2022
 *      Author: moran
 */

#ifndef UNT_H_
#define UNT_H_

int mainMenu();
int get_Vuelos(float precioAA, float precioLA);
float get_DebitCard(float precio);
float get_CreditCard(float precio);
float get_PreBitcoin(float precio);
float get_precioKm(float precio, float km);
float get_IngrePrecio(int ingreso);
float opcionKm(float km);


int unt_getNumero(int* pResultado, char* mensaje, char* mensajeError, int minimo, int maximo, int reintentos);
int unt_getNumeroFlotante(float* pResultado, char* mensaje, char* mensajeError, float minimo, float maximo, int reintentos);
int unt_getCaracter(char* pResultado, char* mensaje, char* mensajeError, char minimo, char maximo, int reintentos);

int getInt(char mensaje[]);
float getFloat(char mensaje[]);
char getChar(char mensaje[]);

char getNumeroAleatorio(int desde, int hasta, int iniciar);

int sumar(int operador1,int operador2);// Prototipo o firma de la función
int restar(int operador1,int operador2);
int multiplicar(int operador1,int operador2);
int division(int operador1, int operador2, float* pResultado);

#endif /* UNT_H_ */
