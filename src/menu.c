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
	int opcion;
	int cant;
	printf("1- Ingresar kilometros: \n");
	printf("2- ingresar precio de vuelos: \n");
	printf("3- Calcular todos los costos: \n");
	printf("4- Informar Resultados: \n");
	printf("5- Carga forzada de datos: \n");
	printf("6- finalizar \n");
	printf("seleccione una opcion: \n");
	cant=scanf("%d", &opcion);
	if(opcion >= 7 || cant == 0)
	{
		printf("No es una opcion valida\n");
		system("pause");
	}

	return opcion;
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
	printf("Ingrese el precio: Aerolineas Argentina $%.2f || Latam $%.2f ", opcAA, opcLA);
	printf("\n1- Precio Aerolineas Argentinas\n");
	printf("\n2- Precio Latam\n");
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
	printf("Precio Aerolíneas: $%.2f\n", precioAA);
	printf("a) Precio con tarjeta de débito: $%.2f\n", debitAA);
	printf("b) Precio con tarjeta de crédito: $%.2f\n", creditAA);
	printf("c) Precio pagando con bitcoin: %.5f\n",btcAA);
	printf("d) Precio unitario: $%.2f\n", uniAA);
	printf("\n");
	printf("La diferencia de precio es: $%.2f\n", diferencia);
	printf("\n");
	printf("Precio Latam: $%.2f\n",precioLat);
	printf("\n");
	printf("a) Precio con tarjeta de débito: $%.2f\n", debitLat);
	printf("b) Precio con tarjeta de crédito: $%.2f\n", creditLat);
	printf("c) Precio pagando con bitcoin: %.5f\n", btcLat);
	printf("d) Precio unitario: $%.2f\n", uniLat);
}

float get_validation()
{
	float km;
	int aux;
	printf("ingrese los kilometros del vuelo: \n");
	aux= scanf("%f", &km);
	while(km<=0 || aux==0){
		fflush(stdout);
		printf("ERROR! ingresar nuevamente los kilometros: \n");
		scanf("%f", &km);
	}
	return km;
}

