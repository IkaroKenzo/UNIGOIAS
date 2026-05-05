#include <stdio.h>

int main(){
	
	int x, y;
	scanf("%i", &x);
	scanf("%i", &y);
	
	if(x > y){
		printf("%i greater than %i", x,y);
	}
	else if(x < y){
		printf("%i greater than %i", y,x);
	}
	else{
		printf("%i and %i are equal", x,y);
	}
	
	return 0;
}