/*
 * calculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: moran
 */

//a)
/**
 *  \brief Calcula el precio pagando con Tarjeta de débito
 *  \param Operacion para aplicar el descuento del 10%
 *  \return El descuento aplicado
 *
*/
float get_DebitCard(float precio)
{
	float preDebit;
	preDebit= precio-((precio * 10)/ 100);
	return preDebit;
}

//b)
/**
 *  \brief Calcula el precio pagando con Tarjeta de crédito
 *  \param Operacion para aplicar el interes del 25%
 *  \return El interes aplicado
 *
*/
float get_CreditCard(float precio)
{
	int precioCredito;
	precioCredito= precio+((precio * 25)/100);
	return precioCredito;
}

//c)
/**
 *  \brief Calcula el precio del pago con Bitcon
 *  \param realiza la operacion
 *  \return El valor en Bitcon
 *
*/
float get_PreBitcoin(float precio)
{
	float preBitcoin;
	preBitcoin= precio / 4606954.55;
	return preBitcoin;
}

//d)
/**
 *  \brief Calcula el precio por kilimetro
 *  \param realiza la operacion para saber el precio
 *  \return El valor
 *
*/
float get_precioKm(float precio, float km)
{
	float precioKm;
	precioKm= precio / km;
	return precioKm;
}
//e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
/**
 *  \brief Permite el ingreso del precio
 *  \param Pregunta si la opcion es valda
 *  \return El precio y la opcion elegida
 *
*/
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
