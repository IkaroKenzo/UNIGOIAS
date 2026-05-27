#include <stdio.h>

// Criar um algoritmo que leia um número (NUM), e depois leia NUM números inteiros
//e imprima o maior e o menor deles. Suponha que todos os números lidos serão
//positivos.

int main(){
	
	int NUM, NUM1, i;
	for(i = 0; i <= 5; i++){   //Vai se repetir apenas 5 vezes.
		printf("Enter a number\n");
		scanf("%i", &NUM);
		printf("Enter another number\n");
		scanf("%i", &NUM1);
		if(NUM > NUM1){
			printf("%i is greater than %i\n", NUM, NUM1);
		}
		else if(NUM < NUM1){
			printf("%i is greater than %i\n", NUM1, NUM);
		}
		else{
			printf("EQUALS\n");
		}
	}
	return 0;
}