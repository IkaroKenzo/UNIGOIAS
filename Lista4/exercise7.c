#include <stdio.h>

// Escreva um algoritmo que imprima os 100 primeiros números ímpares.

int main(){
	int i;
	do{
		if(i % 2 != 0){
			printf("%i\n", i);
		}
		i++;
	}while(i <= 100);
	return 0;
}