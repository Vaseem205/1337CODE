#include <stdio.h>

#define SIZE 32

int main(){
    
    int x = 10;
    int arr[SIZE];
    
    int val;
    int i=0;
    
    while(x){
        val = x%2;
        arr[i] = val;
        x/=2;
        i++;
    }
    
    for(int k=(i-1); k>=0; k--){
        printf("%d", arr[k]);
    }

    return 0;
}