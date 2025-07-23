#include <stdio.h>
#include <stdint.h>

int main(){
    
    uint8_t num = 0b11111101;
    int left = 7;
    int right = 0;

    int leftBit;
    int rightBit;
    int flag = 0;
    
    
    while(left>right){
        leftBit = (num>>left)&1;
        rightBit = (num>>right)&1;
        
        if(leftBit != rightBit){
            flag = 1;
        }
        
        left--;
        right++;
    }
    
    
    if(flag){
        printf("NOT Palindrome\n");
    }else{
        printf("Palindrome");
    }
    
    return 0;
}


