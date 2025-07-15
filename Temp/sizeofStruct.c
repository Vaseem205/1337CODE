#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct Node{
    int data:1;
    int data2:1;
    int ptr:1;
}Node;


void bubbleSort(int* arr, int n){
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                arr[j] = arr[j]^arr[j+1];
                arr[j+1] = arr[j]^arr[j+1];
                arr[j] = arr[j]^arr[j+1];
            }
        }
    }
}

int func(int num){
    int rev_num = 0;
    while(num>0){
        rev_num = rev_num * 10 + (num%10);      // num%10: get the last element
        num = num/10;                           // num/10: elemenate the last element
    }
    return rev_num;
}


typedef struct Object{
    int value;
    void (*set)(struct Object*, int);
    int  (*get)(struct Object*);
} Object;

void setValue(Object* self, int data){
    self->value = data;
}

int getValue(Object* self){
    return self->value;
}


Object* initObj(int data){
    Object* newObj = (Object *)malloc(sizeof(Object));      // allocate memory
    newObj->value = data;                                   // init with given dummy data
    newObj->set = setValue;                                 // set fp
    newObj->get = getValue;                                 // get fp
    return newObj;
}


int main(){

    // sizeof(struct)
    Node arr[2];
    int size = (char *)&arr[1] - (char *)&arr[0];
    printf("SizeOf Struct: %d Bytes\n", size);


    // reverse integer and check weather it is palidrome or not
    int num = 121;
    int reversed = func(num);

    printf("Reversed: %d\n", reversed);

    if(reversed==num){
        printf("Given input is palindrome\n");
    }else{
        printf("Given input is NOT palindrome\n");
    }

    // OOP
    Object* obj = initObj(10);                  // initialize Object
    obj->set(obj, 42);                          // setValue
    printf("Value: %d\n", obj->get(obj));       // retrieveValue
    free(obj);                                  // free Object

    return 0;
}