#include <stdio.h>

int countDivisor(int prgin);

int main(void){
    int prgout = countDivisor(12);
    printf("Divisor: %d", prgout);
    
    return (0);
}

int countDivisor(int prgin){
    int counter;
    
    for(int foo = 1; foo <= prgin; foo++){
        if(prgin % foo == 0 && foo % 3 == 0){
            counter++;
        }
    }
    
    return (counter);
}