#include <stdio.h>

int main(){
    
    int a = 10;
    int rightShift = 2;
    int count = rightShift;
    
    while(count){
        a = a/rightShift;
        count-=1;
    }
    
    printf("%d\n", a);

    return 0;
}