#include <stdio.h>

int main(){
	
	int x, y, sum;
	scanf("%i", &x);
	scanf("%i", &y);
	sum = x + y;
	
	if (sum >= 10){
		
		printf("%i is the sum between these two numbers \n", sum);
	}
	
	return 0;
}