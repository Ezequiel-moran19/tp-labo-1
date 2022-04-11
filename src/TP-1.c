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
////
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
#include "calculos.h"
#include "menu.h"

int main(void)
{
	setbuf(stdout, NULL);
    int opcion;
    int opcionVuelos;
    int flag = 0;
    float kms =7090;
    float precioAA= 1629665;
    float precioLat= 159339;
    float debitAA;
    float creditAA;
    float btcAA;
    float uniAA;
    float debitLat;
	float creditLat;
	float btcLat;
	float uniLat;
	float diferencia;

    do
    {
    	opcion= mainMenu();
    	switch(opcion)
		{
    		case 1://pedimos el ingreso de los kms
    			printf("Ingrese los kilometros: ");
    			scanf("%f", &kms);
    			system("pause");
    			break;
			case 2://Pedimos el ingreso de los precios
				opcionVuelos= get_Vuelos(precioAA, precioLat);
				if(opcionVuelos == 1)
				{
					precioAA= get_IngrePrecio(opcionVuelos);
					flag= 1;
				}
				else
				{
					precioLat= get_IngrePrecio(opcionVuelos);
					flag= 2;
				}
                if(flag == 1)
                {
                	precioLat= get_IngrePrecio(2);
                }
                else
                {
                	precioAA= get_IngrePrecio(1);
                }
                system("pause");
    		    break;
    		case 3:// Calcular todos los costos
    		    debitAA= get_DebitCard(precioAA);
			    creditAA= get_CreditCard(precioAA);
			    btcAA= get_PreBitcoin(precioAA);
			    uniAA =get_precioKm(precioAA, kms);
			    debitLat= get_DebitCard(precioLat);
				creditLat= get_CreditCard(precioLat);
				btcLat= get_PreBitcoin(precioLat);
				uniLat= get_precioKm(precioLat, kms);
				if(precioAA > precioLat)
				{
					diferencia= precioAA - precioLat;
				}
				else
				{
					diferencia= precioLat - precioAA;
				}
                printf("Calculos realizados\n");
                system("pause");
				break;
    		case 4://Informar Resultados
    			get_Resultados(kms, precioAA, precioLat, debitAA, creditAA, btcAA, uniAA, debitLat, creditLat, btcLat, uniLat, diferencia);
    			system("pause");
				break;
    		case 5://Carga forzada de datos
    			debitAA= get_DebitCard(1629665);
				creditAA= get_CreditCard(1629665);
				btcAA= get_PreBitcoin(1629665);
				uniAA =get_precioKm(1629665, 7090);
				debitLat= get_DebitCard(159339);
				creditLat= get_CreditCard(159339);
				btcLat= get_PreBitcoin(159339);
				uniLat= get_precioKm(159339, 7090);
				diferencia= 1629665 - 159339;
				get_Resultados(kms, precioAA, precioLat, debitAA, creditAA, btcAA, uniAA, debitLat, creditLat, btcLat, uniLat, 7090);
				system("pause");
				break;

		}
    }while(opcion != 6);

    return 0;
}


