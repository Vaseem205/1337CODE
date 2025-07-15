#include <stdio.h>


int main(){
    int a = 5;
    int b = 3;
    int count = 0;
    int xorValue = a^b;
    while(xorValue!=0){
        if(xorValue&1){
            count += 1;
        }
        xorValue = xorValue>>1;
    }
    printf("final count: %d\n", count);
    return 0;
}