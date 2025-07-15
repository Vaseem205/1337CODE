#include <stdio.h>

int countSetBits(int x){

    int count = 0;

    for(int i=0; i<32; i++){

        if(((x>>i)&0x1)==1){
            count+=1;
        }

    }



    return count;
}



int main(){

    int x = 0xFF1F;

    int val = countSetBits(x);

    printf("Count of set bits: %d\n", val);

    int start = 5;
    int end = 10;

    int mask = (((1<<(end-start-1))-1)<<start);



}