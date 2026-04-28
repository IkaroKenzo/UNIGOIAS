#include <stdio.h>
#include <math.h>

int main(){
	
	float x;
	scanf("%f", &x);
	
	if(x >= 0){
		float root = sqrt(x);
		printf("Result = %.1f\n", root);
	}
	else{
		float square = pow(x,2);
		printf("Result = %.1f\n", square);
	}
	
	return 0;
}