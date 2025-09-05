#include <stdio.h>

int nthTerm(int prgin);

int main(void){
    int prgin = 4;
    int prgout = nthTerm(prgin);
    printf("%dth Term: %d", prgin, prgout);
}
int nthTerm(int prgin){
    int first_term = 1;
    int diff = 2;
    int term = 1;
    
    for(int foo = 1; foo < prgin; foo++){
        first_term = first_term + diff;
        diff++;
    }
    
    return (first_term);
}