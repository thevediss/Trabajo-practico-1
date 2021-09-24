/*
 ============================================================================
 Name        : TP.c
 Author      : Juan Martín Diez
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Hacer una calculadora. Para ello el programa iniciará y contará con un menú de opciones:
 1. Ingresar 1er operando (A=x)
 2. Ingresar 2do operando (B=y)
 3. Calcular todas las operaciones
 a) Calcular la suma (A+B)
 b) Calcular la resta (A-B)
 c) Calcular la division (A/B)
 d) Calcular la multiplicacion (A*B)
 e) Calcular el factorial (A!)
 4. Informar resultados
 a) “El resultado de A+B es: r”
 b) “El resultado de A-B es: r”
 c) “El resultado de A/B es: r” o “No es posible dividir por cero”
 d) “El resultado de A*B es: r”
 e) “El factorial de A es: r1 y El factorial de B es: r2”
 5. Salir
 • Todas las funciones matemáticas del menú se deberán realizar en una biblioteca aparte,
 que contenga las funciones para realizar las cinco operaciones.
 • En el menú deberán aparecer los valores actuales cargados en los operandos A y B
 (donde dice “x” e “y” en el ejemplo, se debe mostrar el número cargado)
 • Deberán contemplarse los casos de error (división por cero, etc)
 • Documentar todas las funciones */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int main(void) {
	setbuf(stdout, NULL);

	int opcion;
	int numeroUno;
	int numeroDos;
	int resultadoSuma;
	int resultadoResta;
	float resultadoDivision;
	int resultadoMultiplicacion;
	int flag;
	int factorialNumeroUno;
	int factorialNumeroDos;
	int flagFactorialUno;
	int flagFactorialDos;

	do {
		opcion = menu1();
		switch (opcion) {

		case 1:
			numeroUno = ingresarNumero("Ingrese un numero entero:\n");
			printf("Su primer numero ingresado fue:%d\n", numeroUno);

			break;
		case 2:
			numeroDos = ingresarNumero("Ingrese un segundo numero entero:\n");
			printf("Su segundo numero ingresado fue:%d\n", numeroDos);
			break;
		case 3:
			menu2(numeroUno, numeroDos);
			resultadoSuma = suma(numeroUno, numeroDos);
			resultadoResta = resta(numeroUno, numeroDos);
			flag = division(numeroUno, numeroDos, &resultadoDivision);
			resultadoMultiplicacion = multiplicacion(numeroUno, numeroDos);
			flagFactorialUno = factorial(numeroUno, &factorialNumeroUno);
			flagFactorialDos = factorial(numeroDos, &factorialNumeroDos);
			break;
		case 4:
			printf("El resultado de %d + %d es igual a: %d\n", numeroUno,
					numeroDos, resultadoSuma);
			printf("El resultado de %d - %d es igual a: %d\n", numeroUno,
					numeroDos, resultadoResta);
			if (flag == 0) {
				printf(
						"No es posible realizar la division porque se ingreso un 0 como numero \n");
			} else {
				printf("El resultado de %d / %d es igual a: %.2f\n", numeroUno,
						numeroDos, resultadoDivision);
			}
			printf("El resultado de %d * %d es igual a: %d\n", numeroUno,
					numeroDos, resultadoMultiplicacion);

			if (flagFactorialUno == 0) {
				printf("No se pudo hacer el factorial del numero uno\n");
			} else {
				printf("El factorial de %d es: %d\n", numeroUno,
						factorialNumeroUno);
			}

			if (flagFactorialDos == 0) {
				printf("No se puso hacer el factorial de numero dos\n");
			} else {
				printf("El factorial de %d es: %d\n", numeroDos,
						factorialNumeroDos);
			}
			break;
		}
	} while (opcion != 5);

	return EXIT_SUCCESS;
}

