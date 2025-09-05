#include <stdio.h>

int factorial(int prgin);

int main(void){
	int prgout = factorial(5);
	printf("Factorial: %d\n", prgout);

	return (0);
}

int factorial(int prgin){
	int quz = 1;
	if(prgin == 1 || stdin == 0){ 
		return (1);
	}

	for(int foo = 1; foo <= prgin; foo++){
		quz *= foo;
	}

	return (quz);
}
