/*
Generate all possible combination of N bits
*/

#include <stdio.h>
#include <math.h>

void printSeries(int index, int givenNum){
    int val;
    for(int i=givenNum-1; i>=0; i--){
        val = (index>>i)&1;
        printf("%d", val);
    }
    printf("\n");
}


int main(){
    
    int givenNum = 3;
    
    int size = (int)pow(2, givenNum);
    
    int index;
    
    for(int i=0; i<size; i++){
        index = i;
        printSeries(index, givenNum);
    }
    
    return 0;
}