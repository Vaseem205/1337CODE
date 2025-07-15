#include <stdio.h>


int main(){

    int a = 0xFFFF;

    int start = 5;
    int end = 10;


    int value = 3;


    int mask = (((1<<(end-start+1))-1)<<start); //0b11111111000

    int flippedMask = ~(mask);

    int andOp = a&flippedMask;

    int bringValue = value<<start;

    int finalValue = bringValue |  andOp;


    printf("final_value: 0x%x\n", finalValue);

    return 0;
}