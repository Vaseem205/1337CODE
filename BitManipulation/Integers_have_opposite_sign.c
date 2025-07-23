/*
Determine if 2 integers have opposite sign
*/

#include <stdio.h>

int main(){
    
    signed int a = -2;
    signed int b = 3;
    
    int mask = 1<<31;
    
    int a_mask = a&mask;
    int b_mask = b&mask;
    
    if(a_mask){
        printf("a_mask: neg\n");
    }else{
        printf("a_mask: non-neg\n");
    }
    
    if(b_mask){
        printf("b_mask: neg\n");
    }else{
        printf("b_mask: non-neg\n");
    }
    

    return 0;
}