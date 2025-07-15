#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define ALPHABETS 26

typedef struct charStruct{
    char character;
    int count;
}charStruct;


typedef struct repeatedNums{
    int value;
    int count;
}repeatedNums;


int main(){


    // count the repreated characters
    char str[] = "programming";
    int size = strlen(str);
    char c;
    charStruct arr[ALPHABETS];

    for(int i=0; i<ALPHABETS; i++){
        arr[i].character = 'a'+i;
        arr[i].count = 0;
    }

    for(int i=0; i<size; i++){
        c = str[i];
        arr[c-'a'].count++;
    }

    for(int i=0; i<ALPHABETS; i++){
        if(arr[i].count > 1){
            printf("Character: %c is repreated %d times\n", arr[i].character, arr[i].count);
        }
    }



    // Palindrome
    char str[] = "abcdcbaa";
    int size = strlen(str);

    int s=0, e=size-1;


    while(s<e){
        if(str[s]!=str[e]){
            printf("Not a palindrome\n");
            return 1;
        }
        s++;
        e--;
    }
    printf("Palindrome\n");


    // count the number of repeatations

    int arr[] = {1,1,2,3,4,4,5,1,1,5,5,3,2};
    int size = sizeof(arr)/sizeof(int);

    repeatedNums repeated[100];

    int value1;

    for(int i=0; i<100; i++){
        repeated[i].value = i;
        repeated[i].count = 0;
    }

    for(int j =0; j<size; j++){
        value1 = arr[j];
        repeated[value1].count++;
    }

    for(int k=0; k<100; k++){
        if(repeated[k].count>1){
            printf("Number: %d is repreated %d times\n", repeated[k].value, repeated[k].count);
        }
    }
    
    return 0;
}