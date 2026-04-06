#include <stdio.h>
#include <math.h>

int main() {
	
	int a;
	double square, root;
	
	printf("Enter a number: \n");
	scanf("%i", &a);
	
	root = sqrt(a);
	square = pow(root,2);
	
	printf("Root of %i is %.1lf, and this same number squared is %.1lf\n", a, root, square);
	
	return 0;
}