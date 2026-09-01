#include <stdio.h>

int main(){
	
	int i, N;
	
	printf("Enter a number: \n");
	scanf("%i", &N);
	
	printf("Divisors of: %i \n", N);
	
	for(i = 1; i <= N; i++){
		if(N % i == 0){
			printf("%i \n", i);
		}
	}
	
	return 0;
}