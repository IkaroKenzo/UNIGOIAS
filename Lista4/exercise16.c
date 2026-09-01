#include <stdio.h>
//Escreva um algoritmo para calcular o fatorial do número N, cujo valor é obtido através do usuário pelo teclado.

int main(){
	
	int N, i, factorial;
	printf("Enter the factorial number\n");
	scanf("%i", &N);
	factorial = 1;
	
	for(i = 1; i <= N; i++){
		factorial = factorial * i;
	}
	printf("The factorial of %i is = %i\n", N, factorial);
	
	return 0;
}
