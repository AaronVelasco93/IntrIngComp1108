#include <iostream>
#include <stdio.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	/*Programa: Cuadrados de los numeros del 1 a 10 con una estrctura FOR*/
	
	//Declaracion de Variables
	int numero;
	printf("\n Programa de cuadrados");
	
	for(numero=1; numero<=10;numero++){
		printf("\n %.f",pow(numero,2));
	}
	
	//------ Incrementos
	
	int dato1=1;
	printf("Dato1: %i",dato1++);//incremento no aplicado
	printf("Dato1: %i",dato1++);//incremente aplicado
	
	//--
	int dato2=1;
	printf("Dato2: %i",++dato2);//incremento aplicado
	
	
	
	
	
	
	return 0;
}
