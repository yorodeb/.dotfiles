#include <stdio.h>

int HCF(int foo, int bar);

int main(void){
    int prgout = HCF(10,5);
    printf("HCF: %d", prgout);
    
    return (0);
}

int HCF(int foo, int bar){
    int left_range; int right_range;
    
    if(foo > bar){
        left_range = bar;
    } else{
        left_range = foo;
    }
    
    right_range = 1;
    
    for(int quz = left_range; quz >= right_range; quz--){
        if(foo % quz == 0 && bar % quz == 0){
            return (quz);
        }
    }
    
    return (right_range);
}