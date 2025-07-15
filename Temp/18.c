#include <stdio.h>
#include <string.h>


void bb(int* arr, int size){
    for(int i=0; i<size-1; i++){
        for(int j=0; j<size-i-1; j++){
            if(arr[j]<arr[j+1]){
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
    }
}

void fliparr(int* arr, int size){
    int start = 0;
    int end = size-1;

    while(start<end){
        arr[start] = arr[start]^arr[end];
        arr[end] = arr[start]^arr[end];
        arr[start] = arr[start]^arr[end];
        start++;
        end--;
    }
}

void reverseString(char* str){
    int size = strlen(str);
    int start = 0;
    int end = size - 1;
    while(start<end){
        str[start] = str[start]^str[end];
        str[end] = str[start]^str[end];
        str[start] = str[start]^str[end];
        start++;
        end--;
    }
}

int main(){

    int arr[5] = {5, 4, 2, 1, 3};
    int size = sizeof(arr)/sizeof(int);

    char str[] = "vaseem";


    // bb(arr, size);
    // fliparr(arr, size);

    reverseString(str);


    // for(int i=0; i<5; i++){
    //     printf("%d ", arr[i]);
    // }

    // printf("\n");

    // for(char i=0; i<5; i++){
    //     printf("%d ", str[i]);
    // }

     printf("Reversed String: %s\n", str);
    return 0;
}