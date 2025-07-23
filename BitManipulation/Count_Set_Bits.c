#include <stdio.h>

int main(){
    
    int n = 7;
    int count = 0;
    
    while(n){
        n = n&(n-1);
        count++;
    }
    
    printf("Set bits: %d\n", count);
    
    return 0;
}



