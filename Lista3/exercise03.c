#include <stdio.h>

int main(){
	
	int x;
	scanf("%i", &x);
	
	if(x % 2 == 0 && x > 0){
		
		printf("The number is pair\n");
	}
	else if(x == 0){
		
		printf("The number is null\n");
	}	
	else {
		printf("The number is odd\n");
	}
	 
	
	return 0;
}