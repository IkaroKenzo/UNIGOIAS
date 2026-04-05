#include <stdio.h>
#include <math.h>

int main() {
	
	int x, y, z;
	
	printf("Type a number: \n");
	scanf("%i", &x);
	printf("Choose a potency: \n");
	scanf("%i", &y);
	
	z = pow(x,y);
	
	printf("The potency is: %i", z);
	
	return 0;