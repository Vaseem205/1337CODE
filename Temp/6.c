#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* plusOne(int* digits, int digitsSize) {
    int Val = 0;
    int sum = 0;
    int power = digitsSize-1;
    printf("power: %d\n", power);

    for(int i=0; i<digitsSize; i++){

        Val =  digits[i];
        int degree = (int) round(pow(10, power));
        Val = digits[i] * degree;
        sum = Val+sum;
        power-=1;
    }

    sum+=1;
    printf("sum: %d\n", sum);


    int divsion = 0;
    while(sum!=0){
        sum = sum/10;
        divsion+=1;
    }

    printf("div: %d\n", divsion);

    
}


int main(){

    int digits[] = {1,2,3};
    int sizdigitsSizee = sizeof(digits)/sizeof(int);

    int* resArray = plusOne(digits, sizdigitsSizee);

    return 0;
}