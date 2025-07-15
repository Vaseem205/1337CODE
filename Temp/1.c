/*

Link: https://leetcode.com/problems/two-sum/description/?envType=problem-list-v2&envId=array

*/

#include <stdio.h>
#include <stdlib.h>



int* fun1(int* arr, int size, int target){
    int incr = -1;
    int found = 0;
    int* arr_fn = (int *)malloc(sizeof(int)*2);
    
    for(int i = 0; i<size; i++){
        int value = arr[i];
        printf("init_value: %d\n", value);
        incr+=1;
        for(int j = 0+incr; j<size; j++){
            int sum = value+arr[j];
            printf("performing: %d + %d\n", value, arr[j]);
            if(sum==target){
                
                printf("index: %d, %d\n", i, j);
                
                
                arr_fn[0] = i;
                arr_fn[1] = j;

                printf("addressof arr_fun: 0x%p\n", &arr_fn);

                printf("arr_fn[0]:%d at address: 0x%p\n", arr_fn[0], &arr_fn[0]);
                printf("arr_fn[1]:%d at address: 0x%p\n", arr_fn[1], &arr_fn[1]);
                
                found+=1;
                
                for(int k =0; k<2; k++){
                    printf("arr_fn[%d]:-> %d at address: 0x%p\n", k, arr_fn[k], &arr_fn[k]);
                }
            }
        }
        if(found==1){
            break;
        }
    }
    return arr_fn;
}

int* fun2(int* arr, int size, int target){

    int found = 0;
    int* arrIndex = (int *)malloc(sizeof(int)*2);

    for(int i = 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            int sum = arr[i]+arr[j];
            if(sum==target){
                arrIndex[0] = i;
                arrIndex[1] = j;
                found+=1;
                break;
            }
        }
        if(found==1){
            break;
        }
    }
    return arrIndex;
}


int* fun3(int* arr, int size, int target){

    int found = 0;
    int* arrIndex = (int *)malloc(sizeof(int)*6);

    int index = 0;

    for(int i = 0; i<size; i++){
        for(int j=i+1; j<size; j++){
            int sum = arr[i]+arr[j];
            if(sum==target){
                arrIndex[index] = i;
                arrIndex[index+1] = j;
                // printf("index: %d, arrIndex[%d]: %d, arrIndex[%d]: %d\n", index,index,  arrIndex[index],index+1, arrIndex[index+1]);
                index+=2;
                break;
            }
        }
    }
    return arrIndex;
}




int main(){

    int arr[6] = {1,2,3,4,5,6};

    int size = sizeof(arr)/sizeof(int);

    int target = 7;

    int* Index = fun3(arr, size, target);
    
    for(int i=0; i<6; i++){

        printf("Index: %d, %d\n", Index[i], Index[i+1]);
        i+=1;

    }    
    

    return   0;
}