#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int x, absolute;
	printf("Enter a number: \n");
	scanf("%i", &x);
	
	absolute = abs(x);
	printf("Result: %i\n", absolute);
	
	
	return 0;
}