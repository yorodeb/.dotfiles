#include <stdio.h>

int isPrime(int prgin);

int main(void){
	int check_var = 30;
	int prgout = isPrime(check_var);
	
	if(prgout == 1){
		printf("%d => Prime!\n", check_var);
	} else{
			printf("%d => Composite!\n", check_var);
	}

	return(0);
}

int isPrime(int prgin){
	if(prgin <= 1){
		return (0);
	}

	for(int bar = 2; bar < prgin; bar++){
		if(prgin % bar == 0){
			return (0);
		}
	}
	
	return (1);
}
