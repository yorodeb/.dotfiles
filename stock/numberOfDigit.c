#include <stdio.h>

int numberOfDigit(int prgin);

int main(void){
	int prgout = numberOfDigit(1023);
	printf("Count: %d\n", prgout);

	return (0);
}

int numberOfDigit(int prgin){
	int counter;
	while(prgin > 0){
		counter++;
		prgin = prgin / 10;
	}

	return (counter);
}
