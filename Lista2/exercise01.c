#include <stdio.h>
#include <math.h>

int main() {
	
	double x, source;
	printf("Enter a number: \n");
	scanf("%lf", &x);
	
	source = sqrt(x);
	printf("The square root is: %.2lf\n", source);
	
	return 0;
}