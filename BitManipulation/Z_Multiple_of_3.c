#include <stdio.h>

int mul(int x){
    int oddCnt = 0;
    int evenCnt =0;
    
    while(x){
        if(x&1){
            oddCnt++;
        }
        x>>=1;
        
        if(x&1){
            evenCnt++;
        }
        x>>=1;
    }
    
    if(oddCnt-evenCnt==0){
        return 1;
    }else{
        return 0;
    }
}


int main(){
    
    int x = 12; //1100
    
    int val = mul(x);
    
    if(val){
        printf("mul of 3\n");
    }else{
        printf("Not mul of 3\n");
    }
    
    
    return 0;
}