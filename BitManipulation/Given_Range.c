/*

Flip/clear/set the bits in given range bits
Add the given number in the given range of bits.

*/

#include <stdio.h>

void flipBits(int x, int start, int end){
    
    int mask = (((1<<(end-start+1))-1)<<start);

    printf("flipBits: 0x%x\n", x^mask);
    
    return;
}

void setBits(int x, int start, int end){
    
    int mask = (((1<<(end-start+1))-1)<<start);

    printf("setBits: 0x%x\n", x|mask);
    
    return;
}


void clearBits(int x, int start, int end){
    
    int mask = (((1<<(end-start+1))-1)<<start);

    printf("clearBits: 0x%x\n", x&(~mask));
    
    return;
}

void placeVarInRange(int x, int start, int end, int y){
    
    int mask = (((1<<(end-start+1))-1)<<start);
    int clearBits = x&(~mask);
    int shiftBits = y<<start;
    
    printf("placeVarInRange: 0x%x\n", clearBits|shiftBits);
    
    return;
}



int main(){
    int start = 4;
    int end = 10;
    int x = 0xDEADC0DE;
    int y =  0xA;
    
    flipBits(x, start, end);
    setBits(x, start, end);
    clearBits(x, start, end);
    placeVarInRange(x, start, end, y);
    
    return 0;
}




