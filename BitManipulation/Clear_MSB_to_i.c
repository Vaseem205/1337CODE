#include <stdio.h>

int main(){
    
    int x = 0xffffffff;
    
    int MSB = 31;
    int i = 16;
    
    int mask = (((1<<(MSB-i+1))-1)<<i);
    int val = x&(~mask);
    
    printf("mask: 0x%x\n", mask);
    printf("~mask: 0x%x\n", ~mask);
    printf("val: 0x%x\n", val);

    return 0;
}