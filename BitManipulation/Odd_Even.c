/*
Given number is odd or even
*/

#include <stdio.h>

int main(){
    int x = 5;
    
    if((x&0x1)==1){
        printf("Given number is ODD");
    }else if((x&0x1)==0){
        printf("Given number is EVEN");
    }
    
    return 0;
}