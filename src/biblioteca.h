/*
 * biblioteca.h
 *
 *  Created on: 22 sept 2021
 *      Author: juanm
 */

#ifndef BIBLIOTECA_H_
#define BIBLIOTECA_H_

/// @fn int menu1(void)
/// @brief Menu inicial del programa con todas las opciones de calculos.
///
/// @return Retorna la opcion seleccionada por el usuario.
int menu1(void);

/// @fn void menu2(int, int)
/// @brief Menu secundario mostrando los calculos a realizar con los numeros ingresados por el usuario.
///
/// @param numeroUno El primer numero ingresado.
/// @param numeroDos El segundo numero ingresado.
void menu2(int numeroUno, int numeroDos);

/// @fn int ingresarNumero(char[])
/// @brief Pide un numero al usuario.
///
/// @param mensaje El mensaje que le muestra al usuario.
/// @return Retorna el numero ingresado por el usuario.
int ingresarNumero(char mensaje[]);

/// @fn int suma(int, int)
/// @brief Suma los dos numeros ingresados por el usuario.
///
/// @param numeroUno El primer numero ingresado.
/// @param numeroDos El segundo numero ingresado.
/// @return El resultado de la suma.
int suma(int numeroUno, int numeroDos);

/// @fn int resta(int, int)
/// @brief Resta los dos numeros ingresados por el usuario.
///
/// @param numeroUno El primer numero ingresado.
/// @param numeroDos El segundo numero ingresado.
/// @return El resultado de la resta.
int resta(int numeroUno, int numeroDos);

/// @fn int division(int, int, float*)
/// @brief Divide los dos numeros ingresados por el usuario.
///
/// @param numeroUno El primer numero ingresado.
/// @param numeroDos El segundo numero ingresado.
/// @param divisionPuntero Resultado de la division.
/// @return Retorna la bandera para verificar si se puede hacer el calculo o no.
int division(int numeroUno, int numeroDos, float *divisionPuntero);

/// @fn int multiplicacion(int, int)
/// @brief Multiplica los dos numeros ingresados por el usuario.
///
/// @param numeroUno El primer numero ingresado.
/// @param numeroDos El segundo numero ingreado.
/// @return El resultado de la multiplicacion.
int multiplicacion(int numeroUno, int numeroDos);

/// @fn int factorial(int, int*)
/// @brief Calcula el factorial de los dos numeros ingresados por el usuario.
///
/// @param numero Numero ingresado por el usuario.
/// @param factorialNumeroUno Resultado del numero ingresado.
/// @return El resultado del factorial de cada numero si es posible.
int factorial(int numero, int *factorialNumeroUno);

#endif /* BIBLIOTECA_H_ */
