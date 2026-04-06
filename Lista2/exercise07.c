#include <stdio.h>
#include <math.h>

int main() {
	
	int a = 1, b = -3, c = 2;
	
	int x1 = (-b + sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
	int x2 = (-b - sqrt(pow(b,2) - (4 * a * c))) / (2 * a);
	
	printf("x1 = %i and x2 = %i\n", x1, x2);
	
	
	return 0;
}