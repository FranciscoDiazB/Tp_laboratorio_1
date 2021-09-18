/*
 ============================================================================
 Name        : Trabajo.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "operaciones.h"
#include "menu.h"
#include "switch.h"


int main(void)
{
	setbuf(stdout, NULL);

    int num1;
    int num2;
    int resSuma;
    int resMult;
    float resDiv;
    int resResta;
    int resFact1;
    int resFact2;
    char salir = 'n';
    int flagMenu1 = 0;
    int flagMenu2 = 0;
    int flagMenu3 = 0;
    int flagOperando1 = 0;
    int flagOperando2 = 0;

    do {



    switch( menu(flagMenu1, flagMenu2, flagMenu3, num1, num2)){

        case 1:

        	printf("\n");
        	printf("Ingrese el numero corresponiente al primer operando: ");
        	fflush(stdin);
        	scanf("%d", &num1);
            flagOperando1 = 1;
            flagMenu1 = 1;
            printf("\n");
            system("pause");
            break;

        case 2:
            if(flagOperando1){

            	printf("\n");
            	printf("Ingrese el numero corresponiente al segundo operando: ");
            	fflush(stdin);
            	scanf("%d", &num2);
            	flagMenu2 = 1;
            	flagOperando2 = 1;
            }
            else {
            	printf("\nSe debe ingresar el primer operando, antes de poder ingresar el segundo\n\n");
            }
            printf("\n");
            system("pause");
            break;

        case 3:
            if (flagOperando2 == 1 && flagOperando1 == 1){

                flagMenu3 = 1;
                resSuma = sumaTP1(num1, num2);
                resResta = restaTP1(num1, num2);
                resMult = multiplicacionTP1(num1, num2);
                resDiv = divisionTP1(num1, num2);

                if(num1 >= 0 && num2 >= 0){
                    resFact1 = factorialNum(num1);
                    resFact2 = factorialNum(num2);
                }
                else if (num1 >= 0 && num2 < 0){
                    resFact1 = factorialNum(num1);
                }
                else if (num1 < 0 && num2 >= 0){
                    resFact2 = factorialNum(num2);
                }
                else{

                }
                printf("\n");

            }
            else if(flagOperando1){
                printf("\nSe debe ingresar el segundo operando, antes de poder realizar los calculos\n\n");
            }
            else{
                printf("\nSe deben ingresar ambos operandos, antes de poder realizar los calculos\n\n");
            }
            system("pause");
            break;

        case 4:
        	caso4 (&flagOperando1, &flagOperando2, &flagMenu1, &flagMenu2, &flagMenu3, resSuma, resResta, resMult, resDiv, resFact1, resFact2, num1, num2);
            system("pause");
            break;

        case 5:
            caso5(&salir);
            break;
        default:
            printf("\nOpcion invalida. Ingrese una opcion existente del menu.\n\n");
            system("pause");
            break;
    }



    } while (salir == 'n');
    return EXIT_SUCCESS;
}
