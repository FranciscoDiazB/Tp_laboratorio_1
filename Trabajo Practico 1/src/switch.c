/*
 * switch.c
 *
 *  Created on: 18 sept. 2021
 *      Author: Asus
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void caso4(int *flag1, int *flag2, int *flagm1, int *flagm2, int *flagm3, int sum, int res, int mult, float div, int fact1, int fact2, int a, int b){

	 if (*flag1 && *flag2 == 0){
	                printf("\nSe debe ingresar el segundo operando, antes de que se pueda informar algun resultado\n\n");
	            }
	            else if (*flag2 == 1 && *flagm3 == 0){
	                printf("\nSe deben hacer los calculos primero, antes de que se pueda informar algun resultado\n\n");
	            }
	            else if (*flag1 == 0){
	                printf("\nSe deben ingresar ambos operandos, antes de que se pueda informar algun resultado\n\n");
	            }
	            else{
	                printf("\n");
	                printf("a) El resultado de la suma entre %d + %d es: %d\n", a, b, sum);
	                printf("b) El resultado de la resta entre %d - %d es: %d\n", a, b, res);
	                printf("c) El resultado de la multiplicacion entre %d * %d es: %d\n", a, b, mult);
	                    if (b == 0){
	                        printf("d) No existe la division en la cual su divisor sea 0 (En este caso B = 0)\n");
	                    }
	                    else {
	                        printf("d) El resultado de la division entre %d / %d es: %.2f\n", a, b, div);
	                    }

	                    if (a >= 0 && b >= 0){
	                        printf("e) El factorial de %d es : %d y el factorial de %d es : %d\n\n", a, fact1, b, fact2);
	                    }
	                    else if (a >= 0 && b < 0){
	                        printf("e) El factorial de %d es : %d. No se puede realizar el factorial de %d por ser negativo\n\n", a, fact1, b);
	                    }
	                    else if (a < 0 && b >= 0){
	                        printf("e) No se puede realizar el factorial de %d por ser negativo. El factorial de %d es : %d\n\n", a, b, fact2);
	                    }
	                    else{
	                        printf("e) No se puede realizar el factorial de numeros negativos\n\n");
	                    }

	                *flag1 = 0;
	                *flag2 = 0;
	                *flagm1 = 0;
	                *flagm2 = 0;
	                *flagm3 = 0;


	            }
}

void caso5(char* salida){
	 printf("\nEsta seguro que desea salir? Oprima una tecla, a excepcion de la 'n'.\n");
	            printf("De lo contrario si desea continuar, oprima la tecla 'n'.\n\n");
	            fflush(stdin);
	            *salida = getchar();


}

