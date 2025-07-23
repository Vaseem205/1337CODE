/*
Toggle 3rd & 5th bits
*/

#include <stdio.h>

int main(){
    
    int a = 3;
    int b = 5;
    
    int x = 0xFF;
    
    int mask1 = 1<<a;
    int mask2 = 1<<b;
    
    int mask = mask1 | mask2;
    
    printf("%x\n", x^mask);

    return 0;
}