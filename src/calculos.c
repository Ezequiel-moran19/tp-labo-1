/*
 * calculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: moran
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//a)
float get_DebitCard(float precio)
{
	float preDebit;
	preDebit= precio-((precio * 10)/ 100);
	return preDebit;
}
//b)
float get_CreditCard(float precio)
{
	int precioCredito;
	precioCredito= precio+((precio * 25)/100);
	return precioCredito;
}
//c)
float get_PreBitcoin(float precio)
{
	float preBitcoin;
	preBitcoin= precio / 4606954.55;
	return preBitcoin;
}
//d)
float get_precioKm(float precio, float km)
{
	float precioKm;
	precioKm= precio / km;
	return precioKm;
}
float get_IngrePrecio(int ingreso)
{
	float precio;
	if(ingreso == 1)
	{
		printf("Ingrese el precio de vuelo de Aerolíneas Argentinas:\n");
		scanf("%f",&precio);
	}
	else
	{
		printf("Ingrese el precio de vuelo de Latam:\n");
		scanf("%f",&precio);
	}
	return precio;
}
