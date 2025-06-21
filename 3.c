/*

Link: https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array

*/

#include <stdio.h>
#include <stdlib.h>

int fun1(int* nums, int numsSize, int target){

    int cnt = 0;

    for(int i =0; i<numsSize; i++){
        if(nums[i]!=target){
            nums[cnt]= nums[i];
            cnt++;
        }
    }
    return cnt;
}

int main(){

    int arr[] = {3,2,2,3};
    int size = sizeof(arr)/sizeof(int);

    int target = 3;
    int value = fun1(arr, size, target);

    for(int i=0; i<value; i++){
        printf("%d ",arr[i]);
    }


    return 0;
}