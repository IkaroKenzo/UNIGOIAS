#include <stdio.h>
#include <math.h>

int pg(int a1, int r, int n){
	
	return a1 * pow(r, n - 1);
}
int main(){
	
	int a1, r, n, result;
	
	printf("Enter the first term (a1)\n");
	scanf("%i", &a1);
	
	printf("Now the reason (r):\n");
	scanf("%i", &r);
	
	printf("Enter the term number (n)\n");
	scanf("%i", &n);
	
	result = pg(a1, r, n);
	
	printf("The %i term of PG is: %i\n", n, result);
	
	return 0;
}