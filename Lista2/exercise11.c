#include <stdio.h>
#include <math.h>

double cathetus(double g){
	double rad = g * 3.14 / 180.0;
	return cos(rad);
}

int main() {
	
	double angle, result;
	
	printf("Enter an angle: \n");
	scanf("%lf", &angle);
	
	result = cathetus(angle);
	
	printf("The Cos of %.1lf is: %.1lf", angle, result);
	
	return 0;
}