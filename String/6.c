/*

Minimum distance between the given two words
Last Updated : 23 Feb, 2025
Given a list of words followed by two words, the task is to find the minimum distance between the given two words in the list of words.

Examples:

    Input: S = { "the", "quick", "brown", "fox", "quick"}, word1 = "the", word2 = "fox"
    Output: 3
    Explanation: Minimum distance between the words "the" and "fox" is 3

    Input: S = {"geeks", "for", "geeks", "contribute",  "practice"}, word1 = "geeks", word2 = "practice"
    Output: 2
    Explanation: Minimum distance between the words "geeks" and "practice" is 2


*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){


    char *str[]= {"geeks", "for", "geeks", "contribute",  "practice"};
    int strSize = sizeof(str) / sizeof(str[0]);
    char w1[] = "geeks";
    char w2[] = "practice";
    int w1Size = strlen(w1);
    int w2Size = strlen(w2);

    int wc = 0;
    int store = 0;
    int flag = 0;

    char* p = w1;
    int* pSize = &w1Size;

    // for(int i=0; i<w1Size; i++){
    //     printf("%c", p[i]);
    // }

    // printf("\n\n");
    // printf("*pSize: %d", *pSize);
    // printf("\n\n");

    for(int i=0; i<strSize; i++){

        if(flag!=0 && flag<=2){
            p = w2;
            pSize = &w2Size;
        }

        for(int k=0; k<*pSize; k++){
            printf("%c", p[k]);
        }
        printf("\n");

        for(int j=0; str[i][j]!='\0'; j++){
            wc=0;
            while(str[i][j]==p[wc]){
                if(wc==(*pSize)){
                    flag = 1;
                    store = i - store;
                    printf("\nstore: %d\n", store);
                }
                j++;
                wc++;
            }
        }
    }

    printf("\ndistance: %d", store);

    return 0;
}