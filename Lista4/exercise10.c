#include <stdio.h>

//Criar um algoritmo que imprima todos os números de 1 até 100, inclusive, a media de
//todos eles

int main(){
	
	int i, sum, division;
	for(i = 0; i <=100; i++){
		printf("%i\n", i);
		sum = sum + i;
	}
	division = sum / 2;
	printf("Mean = %i", division);

	return 0;
}