/*
 ============================================================================
 Name        : TP-1.c
 Author      : PorMiCuenta
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "calculos.h"
#include "menu.h"

int main()
{
	setbuf(stdout, NULL);
    int opcion;
    int opcionVuelos;
    int flag = 0;
    int flagKm= 0;
    int flagPrecios= 0;
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
    			kms= get_validation();
    			flagKm = 1;
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
                if(flag==1)
                {
                	precioLat= get_IngrePrecio(2);
                }
                else
                {
                	precioAA= get_IngrePrecio(1);
                }
                flagPrecios = 1;
                system("pause");
    		    break;
    		case 3:// Calcular todos los costos
    			if(flagKm==1 && flagPrecios==1){
    				printf("realizando calculos...\n");
					debitAA= get_DebitCard(precioAA);
					creditAA= get_CreditCard(precioAA);
					btcAA= get_PreBitcoin(precioAA);
					uniAA = get_precioKm(precioAA, kms);
					debitLat= get_DebitCard(precioLat);
					creditLat= get_CreditCard(precioLat);
					btcLat= get_PreBitcoin(precioLat);
					uniLat= get_precioKm(precioLat, kms);
					diferencia= precioLat - precioAA;
					printf("Calculos realizados. (Elija la opcion Nro 4 para verlos \n");
    			}
    			else if(flagKm==1 && flagPrecios==0)
    			{
				   printf("Si quiere realizar los calculos debe ingresar tambien el precio de los vuelos. \n");
			    }
    			else if(flagKm==0 && flagPrecios==1)
			    {
					printf("Si quiere realizar los calculos debe ingresar tambien los Km \n");
			    }else
			    {
					printf("Si quiere realizar los calculos debe ingresar los km y precios de vuelos o pulsar 5: carga forzada de datos.\n");
				}
                system("pause");
				break;
    		case 4://Informar Resultados
    			if(flagKm == 1 && flagPrecios == 1)
    			{
    				get_Resultados(kms, precioAA, precioLat, debitAA, creditAA, btcAA, uniAA, debitLat, creditLat, btcLat, uniLat, diferencia);
    			}
    			else
    			{
    				printf("Primero debe ingresar los kilometros o elija la opcion 5 (cargar forzada)");
    			}
    			system("pause");
				break;
    		case 5://Carga forzada de datos
					debitAA= get_DebitCard(1629665);
					creditAA= get_CreditCard(1629665);
					btcAA= get_PreBitcoin(1629665);
					uniAA = get_precioKm(1629665, 7090);
					debitLat= get_DebitCard(159339);
					creditLat= get_CreditCard(159339);
					btcLat= get_PreBitcoin(159339);
					uniLat= get_precioKm(159339, 7090);
					diferencia= 1629665 - 159339;
					get_Resultados(kms, precioAA, precioLat, debitAA, creditAA, btcAA, uniAA, debitLat, creditLat, btcLat, uniLat, 7090);
					system("pause");
				break;
    		default:
    			printf("Seleccionaste el Nro 6, has salido menu!!!\n");
				break;
			}
			fflush(stdin);
			system("pause");
		  }while(opcion != 6);

    return 0;
}
