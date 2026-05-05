#include <stdio.h>

int main(){
	
	int x, y;
	scanf("%i", &x);
	
	if(x % 3 == 0 && x % 7 == 0){	
		printf("%i are divisible by three and seven\n",x);
	}
	else if(x % 3 == 0 && x % 7 != 0){	
		printf("%i are divisible by three but not seven\n",x);
	}	
	else if(x % 3 != 0 && x % 7 == 0){
		printf("%i are divisible by seven but not by three\n",x);
	}
	else{
		printf("%i are not divisible by seven and three\n",x);
	}
	return 0;
}