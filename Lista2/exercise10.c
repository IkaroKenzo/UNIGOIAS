#include <stdio.h>
#include <math.h>

double cathetus(double g){
	
	double rad = g * 3.14 / 180;
	return sin(rad);
}

int main(){
	
	double angle, result;
	
	printf("Type the angle: \n");
	scanf("%lf", &angle);
	
	result = cathetus(angle);
	
	printf("Sin of %.1lf is: %.1lf\n", angle, result);
	
	return 0;
}