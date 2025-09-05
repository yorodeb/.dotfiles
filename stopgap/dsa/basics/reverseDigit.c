#include <stdio.h>

int reverseDigit(int prgin);

int main(void){
	int prgout = reverseDigit(321);
	printf("Reversed Number: %d\n", prgout);

	return (0);
}

int reverseDigit(int prgin){
	int reversed_int;

	while(prgin > 0){
		int diff = prgin % 10;
		reversed_int = reversed_int * 10 + diff;
		prgin = prgin / 10;
	}

	return (reversed_int);
}
