#include <stdio.h>

//Escreva um algoritmo que receba dez números do usuário e imprima a metade de cada
//número

int main(){
	
	int i = 0;
	double div;
	
	while(i <= 9){
		printf("Type a number:\n");
		scanf("%lf", &div);
		div = div / 2;
		printf("%.1lf is the result division\n", div);
		i++;
	}
	return 0;
}