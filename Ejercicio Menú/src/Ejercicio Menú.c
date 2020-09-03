/*
 ============================================================================
 Name        : Ejercicio Menú
 Author      : Facundo Meza
 Version     :
 Copyright   : -
 Description : Menú simple con 4 opciones disponibles y validación de datos.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int main(void) {

	setbuf(stdout,NULL);

	char opcion;
	int flag1 = 0;
	int flag2 = 0;


	do{

		printf("a) Saludar \tb)Brindar \tc) Despedirse \td) Salir");
		printf("\n \nIngrese la opcion deseada: "); //Pedimos la opción
		fflush(stdin);
		scanf("%c", &opcion);

		switch (opcion) {

				case 'a':

					system("cls"); //Limpiamos la consola cada vez que se ingrese una ocpión para que quede mas ordenado
					printf("Hola");
					printf("\n-------------------------------------------------------------------\n");
					flag1 = 1;
					break;

				case 'b':

					if (flag1 == 0) {

						printf("Debe saludar antes de brindar!\n"); //No debe ser posible brindar sin antes saludar
						system("pause");

					}

					else {

						system("cls");
						printf("Salud!");
						printf("\n-------------------------------------------------------------------\n");
						flag2 = 1;

					}
					break;


				case 'c':

					if (flag2 == 0) {

						printf("Debe brindar antes de despedirse!\n"); //No debe ser posible despedirse sin antes brindar
						system("pause");
					}

					else {

						if (flag1 == 0) {

							printf("Debe saludar antes de despedirse!\n"); // No debe ser posible despedirse sin antes saludar
							system("pause");
						}

						else {

							system("cls");
                            printf("Adios");
                            printf("\n-------------------------------------------------------------------\n");
                            printf("\n");
						}

					}
					break;


				case 'd':

					break;

		}


	} while (opcion != 'd');

	printf("\nSaliendo...");
	printf("\n");
	system("pause");
	return EXIT_SUCCESS;




}
