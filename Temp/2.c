
/*

Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/?envType=problem-list-v2&envId=array

*/

#include <stdio.h>

int fun1(int* arr, int size){
    int cnt = 1;
    for(int i = 1; i<size; i++){
        if(arr[i] != arr[i-1]){
            arr[cnt] = arr[i];
            cnt++;
        }
    }
    return cnt;
}

int fun2(int* arr, int size){
    int count = 1;
    for(int i =1; i<size; i++){
        if(arr[i] != arr[i-1]){
            arr[count] = arr[i];
            count++;
        }
    }

    return count;
}


int main(){

    int arr[] = {1, 1, 1 ,1, 2, 2, 3, 4, 4, 4, 5, 5, 6};

    int size = sizeof(arr)/sizeof(int);

    int value = fun2(arr, size);

    printf("size: %d\n", value);


    for (int i = 0; i < value; i++) 
        printf("%d ", arr[i]);

    return 0;
}