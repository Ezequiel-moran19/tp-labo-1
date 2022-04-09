/*
 * calculos.c
 *
 *  Created on: 9 abr. 2022
 *      Author: moran
 */

//3. Calcular todos los costos:

//a) Tarjeta de débito (descuento 10%)
float get_DebitCard(float precio)
{
	float preDebit;

	preDebit= precio-((precio * 10)/ 100);
	return preDebit;
}

//b) Tarjeta de crédito (interés 25%)
float get_CreditCard(float precio)
{
	int precioCredito;
	precioCredito= precio+((precio * 25)/100);
	return precioCredito;
}

//c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
float get_PreBitcoin(float precio)
{
	float preBitcoin;
	preBitcoin= precio / 4606954.55;
	return preBitcoin;
}

//d) Mostrar precio por km (precio unitario)
float get_precioKm(float precio, float km)
{
	float precioKm;
	precioKm= precio / km;
	return precioKm;
}
//e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
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
