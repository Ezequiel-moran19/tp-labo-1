/*
 ============================================================================
 Name        : TP-1.c
 Author      : PorMiCuenta
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
1 Enunciado
Una agencia de viaje necesita calcular costos para sus vuelos de Latam y Aerolíneas Argentinas
para ofrecerlos a sus clientes.
Se deberá ingresar por cada vuelo los km totales y el precio total del mismo.
El objetivo de la aplicación es mostrar las diferentes opciones de pagos a sus clientes.
Para ello el programa iniciará y contará con un menú de opciones:
1. Ingresar Kilómetros: ( km=x)
////
2. Ingresar Precio de Vuelos: C
- Precio vuelo Aerolíneas:
- Precio vuelo Latam:
3. Calcular todos los costos:
a) Tarjeta de débito (descuento 10%)
b) Tarjeta de crédito (interés 25%)
c) Bitcoin (1BTC -> 4606954.55 Pesos Argentinos)
d) Mostrar precio por km (precio unitario)
e) Mostrar diferencia de precio ingresada (Latam - Aerolíneas)
/////
4. Informar Resultados
“Latam:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
Aerolíneas:
a) Precio con tarjeta de débito: r
b) Precio con tarjeta de crédito: r
c) Precio pagando con bitcoin : r
d) Precio unitario: r
La diferencia de precio es : r “
/////
5. Carga forzada de datos
////
6. Salir
Aclaraciones del funcionamiento:
El menú se tiene que ver tal cual está descrito en la consigna. Los resultados se tienen que
mostrar con el mismo formato. Se puede realizar un submenú para ingresar los km y los
precios.
Los resultados se tienen que ver con el formato presentado en el menú. De la siguiente
manera
La carga forzada se tiene que mostrar exactamente igual a la pantalla de resultados sin ingresar
ninguna opción previamente. Tiene que calcular todo al momento de apretar el botón con los
siguientes datos:
Km: 7090
Aerolineas Argentinas: $162965
Latam: $ 159339
(solo mostrar los resultados ya calculados)
Se deben realizar todas las validaciones necesarias para que el programa funcione
correctamente. Por ej: no se puede realizar cálculos si no hay vuelos ingresados.
Todas las funciones que realizarán los cálculos del menú se deberán realizar en una biblioteca
aparte, que contenga las funciones para realizar todas las operaciones.
En el menú deberán aparecer los valores actuales cargados en los vuelos de Latam y Aerolineas
(donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
*/
#include <stdio.h>
#include <stdlib.h>
#include "unt.h"

int main(void)
{
	setbuf(stdout, NULL);
    int opcion;
    int mostrar;
//    float km;
	char salir = 'n';

    do
    {
    	switch(mainMenu())
		{
    		case 1:

    			break;
    			/*case 2:
    		    break;
    		case 1:
				break;
    		case 1:
				break;*/

		}
    }while(salir != 's');
    mostrar= get_IngrePrecio(opcion);
   printf(mostrar);
    return 0;
}

int mainMenu()
{
	int option;

	printf("1- Ingresar kilometros: \n");
	printf("2- ingresar precio de vuelos: \n");
	printf("3- Calcular todos los costos: \n");
	printf("4- Informar Resultados: \n");
	printf("5- Carga forzada de datos: \n");
	printf("6- finalizar \n");
	printf("seleccione la opcion deseada: \n");
	fflush(stdout);
	scanf("%d", &option);

	return option;
}
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

int get_Vuelos(float precioAA, float precioLA)
{
	int opcion;
	printf("Ingrese el precio: Aerolineas Argentina %.2f || Latam %.2f ", precioAA, precioLA);
	printf("A- Precio Aerolineas Argentinas\n");
	printf("B- Precio Latam\n");
	printf("Seleccione una opcion");
	scanf("%d",&opcion);
	return opcion;
}

float opcionKm(float km)
{
	int opcion;

	if(km <= 0)
	{
		printf("Km invalido");
		scanf("%d",&opcion);
	}
	else
	{
		printf("ajajajajajajaj");
		scanf("%d",&opcion);
	}

	return opcion;
}


