/*

Check if two strings are anagrams or not

Example:    
    Input: str1 = "anagram" , str2 = "grammar"


*/

#include <stdio.h>
#include <string.h>

#define MAX 26

typedef struct anagram{
    char character;
    int count;

}anagram;


int main(){

    char str1[] = "cdabbbb";
    int str1Size = strlen(str1);
    char str2[] = "abcd";
    int str2Size = strlen(str2);

    anagram str1Arr[MAX];
    anagram str2Arr[MAX];

    int val2;


    for(int i=0; i<MAX; i++){
        str1Arr[i].character = 'a'+ i;
        str1Arr[i].count = 0;
    }

    for(int i=0; i<MAX; i++){
        str2Arr[i].character = 'a'+ i;
        str2Arr[i].count = 0;
    }

    char c;

    for(int i=0; i<str1Size; i++){
        c = str1[i];
        str1Arr[c - 'a'].count++;
    }

    for(int i=0; i<str2Size; i++){
        c = str2[i];
        str2Arr[c - 'a'].count++;
    }


    for(int i=0; i<str2Size; i++){
        c = str2[i];
        if(str2Arr[c - 'a'].count >=1){
            if(str1Arr[c - 'a'].count >=1 && i==str2Size-1){
                printf("Given strings are anagram");
                return 1;
            }
        }
    }

    printf("Given strings are NOT anagram");




    return 0;
}