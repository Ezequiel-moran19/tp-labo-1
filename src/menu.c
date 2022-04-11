/*
 * utn.c
 *
 *  Created on: 17 mar. 2022
 *      Author: moran
 */
#include <stdio.h>
#include <stdlib.h>

 /**
 *  \brief Menu de opciones
 *  \param Opciones disponibles dentro del menu
 *  \return la opcion elegida
 *
*/
int mainMenu()
{
	int option;
	printf("1- Ingresar kilometros: \n");
	printf("2- ingresar precio de vuelos: \n");
	printf("3- Calcular todos los costos: \n");
	printf("4- Informar Resultados: \n");
	printf("5- Carga forzada de datos: \n");
	printf("6- finalizar \n");
	printf("seleccione una opcion: \n");
	scanf("%d", &option);
	return option;
}
/**
 *  \brief Sub menu
 *  \param Opciones disponibles dentro del menu
 *  \return la opcion elegida
 *
*/
int get_Vuelos(float opcAA, float opcLA)
{
	int opcion;
	printf("Ingrese el precio: Aerolineas Argentina %.2f || Latam %.2f ", opcAA, opcLA);
	printf("A- Precio Aerolineas Argentinas\n");
	printf("B- Precio Latam\n");
	printf("Seleccione una opcion: ");
	scanf("%d",&opcion);
	return opcion;
}
/**
 *  \brief Informar Resultados
 *  \param contiene el mensajes junto al valor
 *
*/
void get_Resultados(float kms, float precioAA, float precioLat, float debitAA, float creditAA, float btcAA, float uniAA, float debitLat, float creditLat,float btcLat, float uniLat, float diferencia)
{
	printf("\n");
	printf("Kms Ingresados: %.2f\n",kms);
	printf("Precio Latam: $%.2f\n",precioLat);
	printf("\n");
	printf("a) Precio con tarjeta de débito: $%.2f\n", debitLat);
	printf("b) Precio con tarjeta de crédito: $%.2f\n", creditLat);
	printf("c) Precio pagando con bitcoin: $%.5f\n", btcLat);
	printf("d) Precio unitario: $%.2f\n", uniLat);
	printf("\n");
	printf("Precio Aerolíneas: $%.2f\n", precioAA);
	printf("a) Precio con tarjeta de débito: $%.2f\n", debitAA);
	printf("b) Precio con tarjeta de crédito: $%.2f\n", creditAA);
	printf("c) Precio pagando con bitcoin: $%.5f\n",btcAA);
	printf("d) Precio unitario: $%.2f\n", uniAA);
	printf("\n");
	printf("La diferencia de precio es: $%.2f\n", diferencia);

}

