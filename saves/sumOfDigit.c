#include <stdio.h>

int sumOfDigit(int prgin);

int main(void){
	int prgout = sumOfDigit(567);
	printf("Summition: %d\n", prgout);

	return (0);
}

int sumOfDigit(int prgin){
	int summition = 0;
	
	while(prgin > 0){
		int diff = prgin % 10;
		summition += diff;
		prgin = prgin / 10;
	}

	return (summition);
}
