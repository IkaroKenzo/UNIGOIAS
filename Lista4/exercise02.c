#include <stdio.h>

//Escreva um algoritmo que imprima todos os números inteiros do intervalo fechado
//de 1 a 100.

int main(){

	int n = 1;
	do{
		printf("%i\n", n);
		n++;
	}while(n < 101);
	
	return 0;	
}
