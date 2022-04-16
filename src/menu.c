/*
 * utn.c
 *
 *  Created on: 17 mar. 2022
 *      Author: moran
 */
#include <stdio.h>
#include <stdlib.h>

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

int get_SubMenuVuelos(float opcAA, float opcLA)
{
	int opcion;
	printf("Ingrese el precio: Aerolineas Argentina $%.2f || Latam $%.2f:\n ", opcAA, opcLA);
	printf("1- Precio Aerolineas Argentinas\n");
	printf(" 2- Precio Latam\n");
	printf("Elija la Aerolinea deseada: ");
	scanf("%d",&opcion);
	return opcion;
}

void get_Resultados(float kms, float precioAA, float precioLat, float debitAA, float creditAA, float btcAA, float uniAA, float debitLat, float creditLat,float btcLat, float uniLat, float diferencia)
{
	printf("\n");
	printf("KMs Ingresados: %.2f km\n",kms);
	printf("\n");
	printf("Precio Aerolíneas: $ %.2f\n", precioAA);
	printf("a) Precio con tarjeta de débito: $ %.2f\n", debitAA);
	printf("b) Precio con tarjeta de crédito: $ %.2f\n", creditAA);
	printf("c) Precio pagando con bitcoin: %.4f BTC\n",btcAA );
	printf("d) Mostrar precio unitario: $ %.2f\n", uniAA);
	printf("\n");
	printf("Precio Latam: $ %.2f\n",precioLat);
	printf("a) Precio con tarjeta de débito: $ %.2f\n", debitLat);
	printf("b) Precio con tarjeta de crédito: $ %.2f\n", creditLat);
	printf("c) Precio pagando con bitcoin: %.4f BTC\n", btcLat );
	printf("d) Mostrar precio unitario:  $ %.2f\n", uniLat);
	printf("\n");
	printf("La diferencia de precio es: $ %.2f\n", diferencia);

}

float get_validationKm()
{
	float km;
	int cant;
	printf("ingrese los kilometros del vuelo: \n");
	cant= scanf("%f", &km);
	while(km<=0 || cant==0){
		fflush(stdout);
		printf("ERROR! ingresar nuevamente los kilometros: \n");
		scanf("%f", &km);
		cant=km;
	}
	return km;
}

float get_validationPrecio(int ingreso)
{
	float precio;
	if(ingreso == 1)
	{
		printf("Ingrese el precio de vuelo de Aerolíneas Argentinas: \n");
		scanf("%f",&precio);
	}
	else
	{
		printf("Ingrese el precio de vuelo de Latam: \n");
		scanf("%f",&precio);
	}
	while(precio < 1)
	{
		fflush(stdout);
		printf("ERROR... Reingrese el precio: \n");
		scanf("%f", &precio);
	}
	return precio;
}
