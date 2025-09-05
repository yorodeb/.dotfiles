#include <stdio.h>

int factorial(int prgin);
int nCr(int prg_n, int prg_r);

int main(void){
    int prgout = nCr(5,2);
		printf("nCr: %d\n", prgout);

    return (0);
}

int nCr(int prg_n, int prg_r){
    int n_factorial = factorial(prg_n);
    int r_factorial = factorial(prg_r);
    int nR = factorial(prg_n - prg_r);
    
    return n_factorial/(r_factorial * nR);
}

int factorial(int prgin){
    int factorial = 1;
    
    for(int foo = 1; foo <= prgin; foo++){
        factorial *= foo;
    }
    
    return (factorial);
}
