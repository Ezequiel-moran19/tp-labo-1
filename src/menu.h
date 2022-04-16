/*
 * unt.h
 *
 *  Created on: 17 mar. 2022
 *      Author: moran
 */

#ifndef MENU_H_
#define MENU_H_

int mainMenu();
int get_SubMenuVuelos(float precioAA, float precioLA);
void get_Resultados(float kms, float precioAA, float precioLat, float debitAA, float creditAA, float btcAA, float uniAA, float debitLat, float creditLat,float btcLat, float uniLat, float diferencia);
float get_validationKm();
float get_validationPrecio(int ingreso);

#endif /* MENU_H_ */
