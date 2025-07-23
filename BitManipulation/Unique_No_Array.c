/*

Unique number in an unsorted array

*/

#include <stdio.h>

int findUnique(int arr[], int n) {

    int result = 0;

    for (int i = 0; i < n; i++){
        result = result ^ arr[i];
    }
    
    return result;
}

int main() {
    int arr[] = {2, 3, 5, 4, 7, 5, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Unique number is: %d\n", findUnique(arr, n));
    return 0;
}