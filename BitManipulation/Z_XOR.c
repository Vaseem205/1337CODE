/*
Implement XOR without using XOR
*/

#include <stdio.h>

int main(){
    
    int a = 5;
    int b = 3;
    
    int val = (a & ~b) |  (~a & b);
    
    printf("%d\n", val);

    return 0;
}