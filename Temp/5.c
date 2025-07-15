/*

Link: https://leetcode.com/problems/search-insert-position/description/?envType=problem-list-v2&envId=array

*/

#include <stdio.h>
#include <stdlib.h>



int searchInsert(int* nums, int numsSize, int target) {


    int foundTargetIndex = 0;
    int insertedIndex = 0;

    //check if target present or not
    for(int i=0; i<numsSize; i++){
        if(nums[i]==target){
            printf("Found\n");
            foundTargetIndex = i;
            return foundTargetIndex;
        }

        if(nums[i]!=target && nums[i]>target){
            printf("Not Found\n");
            insertedIndex = i;
            return insertedIndex;
        }
    }
    
}

int searchInsert1(int* nums, int numsSize, int target){
    int index = -1;

    for(int i=0; i<numsSize; i++){
        if(nums[i]>target){
            index = i;
            return index;
        }
    }


    
}



int main(){

    int arr[]= {1,3,5,6,8,9};
    int size = sizeof(arr)/sizeof(int);
    int target = 10;

    int index = searchInsert1(arr, size, target);

    printf("index: %d", index);

    return 0;
}