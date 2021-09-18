/*
 * operaciones.c
 *
 *  Created on: 18 sept. 2021
 *      Author: Asus
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int sumaTP1(int a, int b){

    return a + b;
}

int restaTP1(int a, int b){

    return a - b;

}

int multiplicacionTP1(int a, int b){

    return a * b;
}

float divisionTP1(int a, int b){
    float resultado;
    resultado = (float) a / b;
    return resultado;

}

int factorialNum(int num){

	int facto1;

    if (num == 0 || num == 1){
        facto1 = 1;
    }
    else{
        facto1 = num * factorialNum(num - 1);
    }
    return facto1;
}
