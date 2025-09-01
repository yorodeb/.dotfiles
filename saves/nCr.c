#include <stdio.h>

long int factorial(prgin);
int nCr(int prg_n, int prg_r);

int main(void){
    int prgout = nCr(5,2);
    return (0);
}

int nCr(int prg_n, int prg_r){
    long int n_factorial = factorial(prg_n);
    long int r_factorial = factorial(prg_r);
    long int nR = factorial(prg_n - prg_r);
    
    return n_factorial/(r_factorial * nR);
}

long int factorial(int prgin){
    int factorial = 1;
    
    for(int foo = 1; foo <= prgin; foo++){
        factorial *= foo;
    }
    
    return (factorial);
}