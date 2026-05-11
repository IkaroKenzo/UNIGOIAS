#include <stdio.h>
#include <math.h>

//Criar um algoritmo que leia dois números e imprimir o quadrado do menor número e
//raiz quadrada do maior número, se for possível.


int main(){
	
	double x, y, root, square;
	scanf("%lf", &x);
	scanf("%lf", &y);
	
	if(x > y){
	root = sqrt(x);
	square = pow(y,2);
	printf("The root of X is = %.1lf\n", root);
	printf("The square of Y is = %.1lf\n", square);
	}
	else if(y > x){
	root = sqrt(y);
	square = pow(x,2);
	printf("The root of Y is = %.1lf\n", root);
	printf("The square of X is = %.1lf\n", square);
	}
	else{
		printf("The numbers are equals");
	}
	
	return 0;
}