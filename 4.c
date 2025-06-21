/*

Given 2 sorted arrays, merege it and make it single

*/


#include <stdio.h>
#include <stdlib.h>


int* fun1(int* arr1, int*  arr2, int arr1Size, int arr2Size){
    int* mergedArray = (int *)malloc(sizeof(int)*(arr1Size+arr2Size));

    int index = 0;

    for(int i=0; i<arr1Size; i++){

        mergedArray[i]= arr1[i];
        index+=1;

    }

    for(int j=index; j<arr2Size+index; j++){
        mergedArray[j]= arr2[j-index];
    }
    return mergedArray;
}


int main(){

    int arr1[3] = {1,2,3};
    int arr1Size = sizeof(arr1)/sizeof(int);

    int arr2[3] = {4,5,6};
    int arr2Size = sizeof(arr2)/sizeof(int);

    int* merged = fun1(arr1, arr2, arr1Size, arr2Size);

    int totaSize = arr1Size+arr2Size;

    for(int i=0; i<totaSize; i++){
        printf("[%d] -> %d\n", i,  merged[i]);
    }


    free(merged);

    printf("done");




    return 0;
}