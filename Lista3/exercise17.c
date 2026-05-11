#include <stdio.h>

int main() {
	
	int x;
	scanf("%i", &x);
	
	if(x >= 20 && x <= 90){
		printf("The number is between twenty and ninety\n");
	}
	else{
		printf("The number is not between twenty and ninety\n");
	}
	
	return 0;
}