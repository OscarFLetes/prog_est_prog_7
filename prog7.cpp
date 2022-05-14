/*Autor: Oscar Eduardo Fletes IXta, Realizado: 10/02/2022
	Programa para una tienda de Arduinos, en dicha tineda existen promociones 
		-Hay 5% de descuento en todas las compras 
		-Si se compran minimo 5 arduinos, tienen 15% de descuento
		-si se compran 10 o mas, tienen el 25% de descuento
	Cada arduino tiene un costo de $350.00
	El programa pedira la cantidad de arduinos y calculara el total a pagar
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
	-Declaracion de variables 
	-Variables del tipo flotate, int
	-scanf
	-Operacones aritmeticas 
	-Uso de condiciones 
	-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables flotantes y int, como declararlas, pedirlas por teclado, usar condiciones,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo int (cantidad de arduinos),
	calcula el tota la pagar, hay 5% de descuento en todas las compras, 
	o si se compran minimo 5 arduinos, tienen 15% de descuento, o si se compran 10 o más, 
	tienen el 25% de descuento
	*/
	
#include<stdio.h>

int main() {
	//Variables
	int arduinos; //variable numero entero 
	float total, descuento=0; //variable con decimal
	//Entrada
	printf("Introduce la cantidad de arduinos: "); //imrpime mensaje
	scanf("%d", &arduinos); //lee el numero insertado por el teclado
	//Proceso
	total=arduinos*350.0;
	if (arduinos>9){ //Validacion si arduinos son mayor que 9
		descuento=total*0.25; // ecuacion para esa validacion
	}
	else if (arduinos>4 && arduinos<10){ //Validacion que si arduinos son meyor que 4 y menor que 10
		descuento=total*0.15; // ecuacion para esa validacion 
	}
	else {// validacion que dice, si no se cumple ninguina de las dos validaciones anteriores 
		descuento=total*0.05; //ecuacion de esa validacion 
	}
	//Salida
	printf("Subtotal: \t $%10.2f\n", total); //salida del subtotal
	printf("Descuento: \t-$%10.2f\n", descuento); // salida de la ecuacion descuento
	printf("\t\t------------\n"); //Tabulaciones y formato
	printf("Total: \t\t $%10.2f", total-descuento); // salida del total, usando la variables total menos descuento

	return 0;
}


