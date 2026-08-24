#include <stdio.h>

// Criar um algoritmo que leia um número, e depois leia NUM números inteiros
//e imprima o maior e o menor deles. Suponha que todos os números lidos serão
//positivos

int main(){
	
	int number, smaller, greater, i, NUM;
	
	scanf("%i", &NUM);
	
	scanf("%i", &number);
	smaller = number;
	greater = number;
	
	for(i = 2; i <= NUM; i++){
		scanf("%i", &number);
		if(number > greater){
			greater = number;
		}
		if(number < smaller){
			smaller = number;
		}
		
	}
	printf("Greater: %i\n", greater);
	printf("Smaller: %i\n", smaller);
	
	return 0;
}
