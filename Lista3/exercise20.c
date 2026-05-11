#include <stdio.h>
#include <math.h>

int main(){
	
	double height, weight, IMC;
	printf("Enter your height\n");
	scanf("%lf", &height);
	printf("Enter your weight\n");
	scanf("%lf", &weight);
	
	IMC = weight / (pow(height,2));
	printf("Your IMC = %.2lf\n",IMC);
	
	if(IMC > 40){
		printf("MORBIDLY OBESE");
	}
	else if(IMC >= 20){
		printf("Normal Weight");
	}
	else if(IMC >= 25){
		printf("Overweight");
	}
	else if(IMC >= 30){
		printf("OBESE");
	}
	else{
		printf("UNDERWEIGHT");
	}
	return 0;
}