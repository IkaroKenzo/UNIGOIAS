#include <stdio.h>

//Criar um algoritmo que leia dez números inteiros e imprima o maior e o menor
//número da lista.

int main(){
	int i, greater, smaller, num;
	scanf("%i", &num);
	
	greater = num;
	smaller = num;
	
	for(i = 1; i < 10; i++){
		printf("Enter a number\n");
		scanf("%i", &num);
		
	}
		if(num > greater){
			greater = num;
		}
		if(num < smaller){
			smaller = num;
		}
		printf("%i is the greater number\n", greater);
		printf("%i is the smallest number\n", smaller);
	
	return 0;
}