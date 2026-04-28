#include <stdio.h>

int main(){
	
	int x;
	scanf("%i", &x);
	
	if(x % 3 == 0){
		printf("Is a multiple of 3");
	}
	else{
		printf("Is not a multiple of 3\n");
	}
	return 0;
}