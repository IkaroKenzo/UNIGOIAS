#include <stdio.h>

int main(){
	
	int x;
	scanf("%i", &x);
	
	if(x % 5 == 0){
		printf("is divisible by 5\n");
	}
	else{
		printf("is not divisible by 5\n");
	}
	return 0;
}