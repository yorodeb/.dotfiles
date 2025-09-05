#include <stdio.h>

int sumOfAP(int prg_n, int prg_first, int prg_d);

int main(void){
    int prgout = sumOfAP(5,1,3);
    printf("Summition Of AP: %d", prgout);
    
    return (0);
}

int sumOfAP(int prg_n, int prg_first, int prg_d){
    int summition;
    for(int foo = 0; foo < prg_n; foo++){
        int term = prg_first + (foo * prg_d);
        summition += term;
    }
    
    return(summition);
}