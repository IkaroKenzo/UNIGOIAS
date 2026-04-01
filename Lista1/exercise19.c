#include <stdio.h>

int main (){
	double descount, FirstPrice, DescountPrice;
	
	printf("Type the price without descount: \n");
	scanf("%lf", &FirstPrice);
	
	descount = FirstPrice * 0.9;
	DescountPrice = FirstPrice - descount;
	
	printf("The descount are: %.2lf\n", DescountPrice);
	
	return 0;
}