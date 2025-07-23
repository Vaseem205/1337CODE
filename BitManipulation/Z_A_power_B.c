#include <stdio.h>

int main(){
    
    int base = 2;
    int expo = 3;
    int result =  1;
    
    while(expo>0){
        if(expo&1){
            result = result * base;
        }
        base = base*base;
        expo = expo>>1;
    }
    
    printf("result: %d\n", result);
    
    return 0;
}