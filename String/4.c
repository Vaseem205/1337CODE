/*

First non-repeating character of given string


Examples: 

    Input: s = "geeksforgeeks"
    Output: 'f'
    Explanation: 'f' is the first character in the string which does not repeat.

    Input: s = "racecar"
    Output: 'e'
    Explanation: 'e' is the only character in the string which does not repeat.

    Input: "aabbccc"
    Output: '$'
    Explanation: All the characters in the given string are repeating.


*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 26

typedef struct charCount{
    char character;
    int count;
}charCount;


char anotherWayToSolve(char* str, int size){
    int flag;
    for(int i=0; i<size; i++){
        flag = 0;
        for(int j=0; j<size; j++){
            if(i!=j && str[i]==str[j]){
                flag = 1;
            }
        }

        if(flag!=1){
            return str[i];
        }
    }
    return '$';

}


int main(){

    char str[] = "geeksforgeeks";
    int size = strlen(str);

    // char c;

    // charCount arr[SIZE];

    // for(int i=0; i<SIZE; i++){
    //     arr[i].character = 'a'+i;
    //     arr[i].count =  0;
    // }

    // for(int i=0; i<size; i++){
    //     c = str[i];
    //     arr[c - 'a'].count++;
    // }

    // for(int i=0; i<SIZE; i++){
    //     if(arr[i].count==1){
    //         printf("char: %c | count: %d\n",  arr[i].character, arr[i].count);
    //         return 1;
    //     }
    // }



    char res = anotherWayToSolve(str, size);

    if(res!='$'){
        printf("'%c' has not been repeated\n", res);
    }else{
        printf("$");
    }


    return 0;
}

