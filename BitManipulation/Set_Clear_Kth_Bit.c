#include <stdio.h>
#include <stdint.h>

void setBits(int x){

    uint32_t x_mask;
    x_mask = 1<<4;
    x = x|x_mask;
    printf("x: 0x%x\n", x);

    return;
}

void clearBits(int y){

    uint32_t y_mask;
    y_mask = 1<<10;
    y = y&(~y_mask);
    printf("y: 0x%x\n", y);

    return;
}


int main(){
    
    uint32_t x = 0x0;
    uint32_t y = 0xFFFFFFFF;
    
    setBits(x);
    clearBits(y);
    
    return 0;
}
