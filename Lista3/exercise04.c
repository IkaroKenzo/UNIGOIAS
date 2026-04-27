#include <stdio.h>

int main(){
	
	int x;
	scanf("%i", &x);
	
	if(x > 0){
		
		printf("An positive number\n");
	}
	else if(x < 0){
		printf("An negative number\n");
	}
	else{
		printf("An null number\n");
	}
	return 0;
}