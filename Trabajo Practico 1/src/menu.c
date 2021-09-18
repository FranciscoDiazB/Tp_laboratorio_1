/*
 * menu.c
 *
 *  Created on: 18 sept. 2021
 *      Author: Asus
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int menu (int fmenu1, int fmenu2, int fmenu3, int priNum, int segNum){

int opcion;
    printf("\n\n");
    printf("\n              ---------------------\n");
    printf("              ||   Calculadora   ||\n");
    printf("              ---------------------\n\n");
    printf("Ingrese el numero correspondiente a la opcion que quiera.\n\n");
    printf("--------------------------------------------------------\n\n");

    if (fmenu1 == 0){
        printf(" Opcion (1). Ingrese primer operando (A = x)\n\n");
    }
    else{
        printf(" Opcion (1). Ingrese primer operando (A = %d)\n\n", priNum);
    }

    if (fmenu2 == 0){
        printf(" Opcion (2). Ingrese segundo operando (B = y)\n\n");
    }
    else{
        printf(" Opcion (2). Ingrese segundo operando (B = %d)\n\n", segNum);
    }

    printf(" Opcion (3). Calcular todas las siguientes operaciones: \n  ");

    if(fmenu3 == 0){
        printf(" a) Calcular la suma (A + B)\n  ");
        printf(" b) Calcular la resta (A - B)\n  ");
        printf(" c) Calcular la multiplicacion (A * B)\n  ");
        printf(" d) Calcular la division (A / B)\n  ");
        printf(" e) Calcular factorial (A!) y (B!)\n\n");
    }
    else{
        printf(" a) Calcular la suma (%d + %d)\n  ", priNum, segNum);
        printf(" b) Calcular la resta (%d - %d)\n  ", priNum, segNum);
        printf(" c) Calcular la multiplicacion (%d * %d)\n  ", priNum, segNum);
        printf(" d) Calcular la division (%d / %d)\n  ", priNum, segNum);
        printf(" e) Calcular factorial (%d!) y (%d!)\n\n", priNum, segNum);
    }

    printf(" Opcion (4). Informar resultados de las operaciones.\n\n");
    printf(" Opcion (5). Salir\n\n");
    printf("--------------------------------------------------------\n\n");

    printf("Ingrese el numero de opcion deseada: ");
    fflush(stdin);
    scanf("%d", &opcion);

    return opcion;

}
