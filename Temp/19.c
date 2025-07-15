#include <stdio.h>

int fun1(int* arr, int size){

    int count = 1;

    for(int i=1; i<size; i++){
        if(arr[i]!=arr[i-1]){
            arr[count]= arr[i];
            count++;
        }
    }

    return count;

}

int main(){

    int arr[] = {1, 1, 1 ,1, 2, 2, 3, 4, 4, 4, 5, 5, 6};

    int size = sizeof(arr)/sizeof(int);

    int value = fun1(arr, size);

    for (int i = 0; i < value; i++) 
        printf("%d ", arr[i]);


    return 0;
}