/*

Find parity of number (check weather the set bits count is even or odd)

*/

#include <stdio.h>


int main(){
    
    int a = 7;
    int count =0;
    
    while(a){
        a = a&(a-1);
        count++;
    }
    
    if(count&0x1){
        printf("Parity: ODD");
    }else{
        printf("Parity: EVEN");
    }
    

    return 0;
}