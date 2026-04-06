#include <stdio.h>
#include <math.h>

int main(){
	
	int number, logarithm;
	double result;
	
	printf("Enter a number: \n");
	scanf("%i", &number);
	
	printf("Now an logarithm: \n");
	scanf("%i", &logarithm);
	
	result = log(number) / log(logarithm);
	
	printf("log%i (%i) = %.1lf \n", logarithm, number, result);
	
return 0;
}