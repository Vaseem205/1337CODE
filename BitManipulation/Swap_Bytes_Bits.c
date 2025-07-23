#include <stdio.h>
#include <stdint.h>

void swapBytes(uint32_t x){

    uint8_t mask = 0xFF;
    uint8_t val = 0x0;
    uint32_t res = 0x0;
    for(int i=0; i<4; i++){
        val = x&mask;
        x>>=8;
        res<<=8;
        res = res|val;
    }
    
    printf("swapBytes: %x\n", res);

    return; 
}

void swapBits(uint32_t x){

    uint8_t mask = 0x1;
    uint8_t val = 0x0;
    uint32_t res = 0x0;
    for(int i=0; i<32; i++){
        val = x&mask;
        x>>=1;
        res<<=1;
        res = res|val;
    }
    
    printf("swapBits: %x\n", res);
    
    return; 
    
}

int main(){
    
    uint32_t x = 0xDEADC0DE;
    
    swapBytes(x);
    
    swapBits(x);
    
    return 0;
}



