#include <stdio.h>

int LCM(int foo, int bar);

int main(void){
    int prgout = LCM(10,5);
    printf("LCM: %d", prgout);
    
    return (0);
}

int LCM(int foo, int bar){
    int left_range; int right_range;
    
    if(foo > bar){
        left_range = foo;
    } else{
        left_range = bar;
    }
    
    right_range = foo * bar;
    
    for(int quz = left_range; quz <= right_range; quz++){
        if(quz % foo == 0 && quz % bar == 0){
            return (quz);
        }
    }
    
    return (right_range);
}