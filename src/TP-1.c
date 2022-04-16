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
    float kms;
    float precioAA;
    float precioLat;
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
    		case 1:
    			kms= get_validationKm();
    			flagKm= 1;
    			break;
			case 2:
				opcionVuelos= get_SubMenuVuelos(precioAA, precioLat);

				if(opcionVuelos == 1)
				{
					precioAA= get_validationPrecio(opcionVuelos);
					flag= 1;
				}
				else
				{
					precioLat= get_validationPrecio(opcionVuelos);
					flag= 2;
				}
                if(flag == 1)
                {
                	precioLat= get_validationPrecio(2);
                }
                else
                {
                	precioAA= get_validationPrecio(1);
                }
                flagPrecios= 1;
                system("pause");
    		    break;
    		case 3:
    			if(flagKm == 1 && flagPrecios == 1)
    			{
					debitAA= get_DebitCard(precioAA);
					creditAA= get_CreditCard(precioAA);
					btcAA= get_PreBitcoin(precioAA);
					uniAA = get_precioKm(precioAA, kms);
					debitLat= get_DebitCard(precioLat);
					creditLat= get_CreditCard(precioLat);
					btcLat= get_PreBitcoin(precioLat);
					uniLat= get_precioKm(precioLat, kms);
					diferencia= precioAA - precioLat;
					printf("Calculos realizados. (Elija la opcion Nro 4 para verlos)\n");
    			}
    			else if(flagKm == 1 && flagPrecios == 0)
    			{
				   printf("Si quiere realizar los calculos debe ingresar tambien el precio de los vuelos. \n");
			    }
    			else if(flagKm == 0 && flagPrecios ==1 )
			    {
					printf("Si quiere realizar los calculos debe ingresar tambien los Km \n");
			    }else
			    {
					printf("Si quiere realizar los calculos debe ingresar los km y precios de vuelos o pulsar 5: carga forzada de datos.\n");
				}
                system("pause");
				break;
    		case 4:
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
    		case 5:
    			    kms = 7090;
    			    precioAA= 162965;
    			    precioLat= 159339;
    				debitAA= get_DebitCard(precioAA);
					creditAA= get_CreditCard(precioAA);
					btcAA= get_PreBitcoin(precioAA);
					uniAA = get_precioKm(precioAA, kms);
					debitLat= get_DebitCard(precioLat);
					creditLat= get_CreditCard(precioLat);
					btcLat= get_PreBitcoin(precioLat);
					uniLat= get_precioKm(precioLat, kms);
					diferencia=precioAA - precioLat;
					get_Resultados(kms, precioAA, precioLat, debitAA, creditAA, btcAA, uniAA, debitLat, creditLat, btcLat, uniLat, diferencia);
					system("pause");
				break;
			}

		  }while(opcion != 6);

          printf("Fin!!!");

    return 0;
}
