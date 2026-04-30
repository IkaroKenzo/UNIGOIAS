#include <stdio.h>

int main(){
	
	int x, y;
	scanf("%i", &x);
	scanf("%i", &y);
	
	if(x % y == 0){
		printf("The numbers %i and %i are divisible between them\n",x,y);
	}
	else{
		printf("The numbers %i and %i are not divisible between them\n",x,y);
	}
	return 0;
}