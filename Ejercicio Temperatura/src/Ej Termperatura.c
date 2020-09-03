/*
 ============================================================================
 Name        : Ejercicio Temperatura
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Se le piden una serie de datos a 5 usuarios (inicial, sexo, temperatura y edad), utilizamos operadores de comparacion para mostrar algunos datos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout,NULL);

	char inicial;
	char sexo;
	float temperatura;
	int edad;
	int cantidadH = 0; //Cantidad de hombres ingresados
	int cantidadM = 0; //Cantidad de mujeres ingresadas
	int acumuladorEdad = 0; //Acumulador de edad para realizar un promedio
	float promedio;
	int banderaMujerMasT = 1; //Flag para determinar la mujer con la temperatura más alta
	float maxTemp = 0;
	char inicialMujerMasT;

	for (int i = 0; i < 5; i++) {

		printf("Ingrese su inicial: ");
		fflush(stdin);
		scanf("%c", &inicial);


		printf("Ingrese su sexo: ");
		fflush(stdin);
		scanf("%c", &sexo);

		printf("Ingrese su temperatura: ");
		scanf("%f", &temperatura);

		printf("Ingrese su edad: ");
		scanf("%d", &edad);

		acumuladorEdad += edad;

		switch(sexo) {

				case 'f':
					cantidadM++;

					if (banderaMujerMasT == 1) {

						inicialMujerMasT = inicial;
						maxTemp = temperatura;
						banderaMujerMasT = 0;
					}

					else {
						if (temperatura > maxTemp) {

							inicialMujerMasT = inicial;
							maxTemp = temperatura;

						}
					}
					break;

				case 'm':

					cantidadH++;
					break;

		}


	}

	if (cantidadM > 0) {

		printf("Cantidad de Mujeres: %d", cantidadM);
		printf("\nLa mujer con más temperatura: %c, %.2f", inicialMujerMasT, maxTemp);


	}

	if (cantidadH > 0) {

		printf("\nCantidad de hombres: %d", cantidadH);
	}

	promedio = (float) acumuladorEdad / 5;
	printf("\nEdad promedio: %.2f", promedio);




}
