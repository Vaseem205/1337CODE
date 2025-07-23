#include <stdio.h>

int main(){
    
    int x = 10;
    
    int temp1 = x>>1;
    int temp2 = x ^ temp1;
    
    int val = temp2 & (temp2+1);
    
    if(val){
        printf("NOT-ALTERNATE\n");
    }else{
        printf("ALTERNATE\n");
    }
    
    return 0;
}