#include <stdio.h>

int main(){
	
	float n;
	
	printf("Enter a number: \n");
	scanf("%f", &n);
	
	if(n >= 20){
		
		printf("%.1f\n",n);
	}
	else{
		printf("The number is lesser than twenty.\n");
	}
	
	return 0;
}