/*
 * switch.h
 *
 *  Created on: 18 sept. 2021
 *      Author: Asus
 */

#ifndef SWITCH_H_
#define SWITCH_H_

/** \brief muestra la opcion seleccionada. En este caso (opcion 4), informa los resultados.
 *
 * \param flag1 int* recibe el valor de la direccion de memoria por indireccion de la variable flag llamado flagOperando1.
 * \param flag2 int* recibe el valor de la direccion de memoria por indireccion de la variable flag llamado flagOperando2.
 * \param flagm1 int* recibe el valor de la direccion de memoria por indireccion de la variable flag llamado flagMenu1.
 * \param flagm2 int* recibe el valor de la direccion de memoria por indireccion de la variable flag llamado flagMenu2.
 * \param flagm3 int* recibe el valor de la direccion de memoria por indireccion de la variable flag llamado flagMenu3.
 * \param sum int recibe la variable resSuma.
 * \param res int recibe la variable resResta.
 * \param mult int recibe la variable resMult.
 * \param div float recibe la variable resDiv.
 * \param fact1 int recibe la variable resFact1.
 * \param fact2 int recibe la variable resFact2.
 * \param a int recibe la variable num1 (A).
 * \param b int recibe la variable num2 (B).
 * \return no devuelve nada.
 *
 */
void caso4(int *flag1, int *flag2, int *flagm1, int *flagm2, int *flagm3, int sum, int res, int mult, float div, int fact1, int fact2, int a, int b);

/** \brief ingreso de un caracter y la devolucion del mismo.
 *
 * \param salida char* recibe el valor de la direccion de memoria por indireccion de la variable salir.
 * \return no devuelve nada.
 *
 */
void caso5(char* salida);

#endif /* SWITCH_H_ */
