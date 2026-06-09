#include <stdio.h>

//Criar um algoritmo que leia os limites inferior e superior de um intervalo
//e imprima todos os números pares no intervalo aberto e seu somatório.
// Suponha que os dados digitados são para um intervalo crescente, ou seja, o primeiro valor é menor que o segundo.


int main(){
	int i, superior, inferior;
	int sum = 0;
	
	printf("Type the inferior number: \n");
	scanf("%i", &inferior);
	
	printf("Type the superior number: \n");
	scanf("%i", &superior);
	
	for(i = inferior + 1; i < superior; i++){
		
		if(i % 2 == 0){
			printf("%i ", i);
			sum += i;
		}
	}
	printf("\nSum = %i\n", sum);
	
	return 0;
}