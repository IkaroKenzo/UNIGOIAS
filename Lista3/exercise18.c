#include <stdio.h>

int main(){
	
	//Construir um algoritmo que leia um número e imprima se ele é igual a 5, a 200, a
//400, se está no intervalo entre 500 e 1000, inclusive, ou se ela está fora dos escopos
//anteriores.
	
	int x;
	scanf("%i", &x);
	
	if(x == 5 || x == 200 || x == 400){
		printf("%i", x);
	}
	else if(x >= 500 && x <= 1000){
		printf("the number is between the range 500 and 1000");
	}
	else{
		printf("out of scope");
	}
	return 0;
}