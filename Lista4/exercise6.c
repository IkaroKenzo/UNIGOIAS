#include <stdio.h>

//Escreva um algoritmo que imprima todos os números múltiplos de 5, no intervalo
//fechado de 1 a 500.

int main(){
	
	int x;
	for(x = 0; x <= 500; x++){
		printf("%i\n", x);
		x = x + 4;
	}
	return 0;
}