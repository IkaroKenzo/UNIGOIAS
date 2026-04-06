#include <stdio.h>

int pa(int a1, int r, int n){
	
	return a1 + ((n - 1) * r);
}

int main(){
	
	int a1, r, n, result;
	
	printf("Enter the first term: \n");
	scanf("%i", &a1);
	
	printf("Now the reason; \n");
	scanf("%i", &r);
	
	printf("Write the term number: \n");
	scanf("%i", &n);
	
	result = pa(a1, r, n);
	
	printf("The %i term of PA is: %i\n",n, result);
	
	
	return 0;
}