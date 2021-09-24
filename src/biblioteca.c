/*
 * biblioteca.c
 *
 *  Created on: 22 sept 2021
 *      Author: juanm
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"

int ingresarNumero(char mensaje[]) {
	int numero;
	printf("%s", mensaje);
	scanf("%d", &numero);

	return numero;
}

int suma(int numeroUno, int numeroDos) {
	int suma;
	suma = numeroUno + numeroDos;

	return suma;
}

int resta(int numeroUno, int numeroDos) {
	int resta;
	resta = numeroUno - numeroDos;

	return resta;
}

int division(int numeroUno, int numeroDos, float *divisionPuntero) {
	float division;
	int flag = 0;

	if (!(numeroUno == 0 || numeroDos == 0)) {
		division = (float) numeroUno / numeroDos;
		flag = 1;

	}
	*divisionPuntero = division;

	return flag;
}

int multiplicacion(int numeroUno, int numeroDos) {
	int multiplicacion;
	multiplicacion = numeroUno * numeroDos;

	return multiplicacion;
}

int factorial(int numero, int *factorialNumeroUno) {
	int flag;
	int i;
	int resultado = 1;

	if (numero < 0) {
		flag = 0;
	} else {
		flag = 1;
		for (i = 1; i <= numero; i++) {
			resultado = resultado * i;
		}
	}
	*factorialNumeroUno = resultado;

	return flag;
}

int menu1(void)

{
	int opcion;

	printf("1. Ingresar 1er operando (A=x)\n");
	printf("2. Ingresar 2do operando (B=y)\n");
	printf("3. Calcular todas las operaciones\n");
	printf("4. Informar resultados\n");
	printf("5. Salir\n");
	printf("Elija opcion: ");
	scanf("%d", &opcion);

	return opcion;
}

void menu2(int numeroUno, int numeroDos)

{
	printf("1. Calcular la suma (%d + %d)\n", numeroUno, numeroDos);
	printf("2. Calcular la resta (%d - %d)\n", numeroUno, numeroDos);
	printf("3. Calcular la multiplicacion (%d * %d)\n", numeroUno, numeroDos);
	printf("4. Calcular la division (%d / %d) si es posible\n", numeroUno,
			numeroDos);
	printf("5. Calcular el factorial de %d y %d si es posible\n", numeroUno,
			numeroDos);
}

