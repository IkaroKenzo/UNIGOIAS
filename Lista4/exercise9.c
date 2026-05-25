#include <stdio.h>

//Criar um algoritmo que imprima todos os números de 1 até 100, inclusive, e a soma de
//todos eles

int main(){
	
	int i, sum, result;
	for(i = 0; i <=100; i++){
		printf("%i\n", i);
		sum = sum + i;
	}
	result = sum - 1;
	printf("Sum = %i", result);

	return 0;
}