#include <stdio.h>

int main(){
	
	int x, y, sum, result;
	scanf("%i", &x);
	scanf("%i", &y);
	
	sum = x + y;
	
	if(sum > 20){
		result = sum + 8;
		printf("%i + 8 = %i",sum, result);
	}
	else{
		result = sum - 5;
		printf("%i - 5 = %i",sum, result);
	}
	
	return 0;
}