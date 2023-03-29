#include <stdio.h>
// #define cantidad 8
int main() {
	int cantidad;
	int costo;
	printf("Introduzca la cantidad a comprar : ");
	scanf("%i",&cantidad);
	switch(cantidad){
		case 1: case 2: case 3:
			costo = 15;
			break;
		case 4: case 5: case 6: case 7: case 8:
			costo = 11;
			break;
		defaut:
			costo = 10;
	}
	printf("Costo por cada teclado : %i\n", costo);
	printf("Total a pagar : %2.f\n", (float)(costo*cantidad));
	return 0;
}
