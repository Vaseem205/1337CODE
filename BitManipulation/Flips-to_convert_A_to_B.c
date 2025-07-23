/*
Count number of flips to convert A to B
*/

#include <stdio.h>

int main(){

    int A = 5;
    int B = 3;
    int val = A^B;
    int count = 0;

    while(val){
        val = val&(val-1);
        count++;
    }

    printf("count: %d\n", count);

    return 0;
}