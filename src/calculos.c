/*
 * calculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: moran
 */
#include <stdio.h>
#include <stdlib.h>


float get_DebitCard(float precio)
{
	float preDebit;
	preDebit= precio-((precio * 10)/ 100);
	return preDebit;
}

float get_CreditCard(float precio)
{
	int precioCredito;
	precioCredito= precio+((precio * 25)/100);
	return precioCredito;
}

float get_PreBitcoin(float precio)
{
	float preBitcoin;
	preBitcoin= precio / 4606954.55;
	return preBitcoin;
}

float get_precioKm(float precio, float km)
{
	float precioUnitario;
	precioUnitario= precio / km;
	return precioUnitario;
}

