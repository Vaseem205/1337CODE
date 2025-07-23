#include <stdio.h>


int main(){

    int x = 7;

    if((x&(x-1))==0){
        printf("power of 2\n");
    }else{
        printf("Not power of 2\n");
    }

    return 0;
}