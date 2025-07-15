#include <stdio.h>

int swapBytes(int x){
    int result;
    for(int i=0; i<4; i++){
        result<<=8;
        result = result | (x & 0xff);  //get last 2 bytes (form x) and add it to result
        x>>=8;
    }

    return result;
}


int main(){

    int a = 0xdeadbeef;

    int val = swapBytes(a);

    printf("%x\n", val);

    return 0;
}