/*
 * operaciones.h
 *
 *  Created on: 18 sept. 2021
 *      Author: Asus
 */

#ifndef OPERACIONES_H_
#define OPERACIONES_H_

/** \brief Suma los numeros ingresados (A + B)
 *
 * \param a int recibe la variable num1 (A).
 * \param b int recibe la variable num2 (B).
 * \return int devuelve el resultado de la suma entre ambas variables.
 *
 */
int sumaTP1(int a, int b);


/** \brief resta los numeros ingresados (A - B)
 *
 * \param a int recibe la variable num1 (A).
 * \param b int recibe la variable num2 (B).
 * \return int devuelve el resultado de la resta entre ambas variables.
 *
 */
int restaTP1(int a, int b);


/** \brief multiplica los numeros ingresados (A * B)
 *
 * \param a int recibe la variable num1 (A).
 * \param b int recibe la variable num2 (B).
 * \return int devuelve el resultado de la multiplicacion entre ambas variables.
 *
 */
int multiplicacionTP1(int a, int b);


/** \brief divide los numeros ingresados (A / B)
 *
 * \param a int recibe la variable num1 (A).
 * \param b int recibe la variable num2 (B).
 * \return float devuelve el resultado de la division entre ambas variables.
 *
 */
float divisionTP1(int a, int b);


/** \brief calcula el factorial de un numero.
 *
 * \param a int recibe la variable num.
 * \return int devuelve el resultado del factorial de num a traves de una funcion recursiva.
 *
 */
int factorialNum(int num);

#endif /* OPERACIONES_H_ */
