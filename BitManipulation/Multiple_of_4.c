#include <stdio.h>

/*

A number is divisible by 4 if its last 2 bits are 0 in binary.

*/

int main(){

    int x = 6;
    int mask = 3;

    int val = x&mask;

    if(val){
        printf("Not a multiple of 4\n");
    }else{
        printf("Multiple of 4\n");
    }


    return 0;
}