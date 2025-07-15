/*

Check if Strings Are Rotations of Each Other

Examples: 

    Input: s1 = "abcd", s2 = "cdab"
    Output: true
    Explanation: After 2 right rotations, s1 will become equal to s2.

    Input: s1 = "aab", s2 = "aba"
    Output: true
    Explanation: After 1 left rotation, s1 will become equal to s2.

    Input: s1 = "abcd", s2 = "acbd"
    Output: false
    Explanation: Strings are not rotations of each other.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rotate(char* str, int n){
    int count = 0;
    char temp;

    temp = str[count];
    while(count<(n-1)){
        str[count] = str[count+1];
        count+=1;
    }
    str[n-1] = temp;
}


int main(){
    char s1[] = "abcd";
    char s2[] = "cdab";

    int size = strlen(s1);


    for(int i=0; i<size; i++){

        rotate(s1, size);

        printf("%s\n", s1);

        int count = 0;
        while(s1[count] == s2[count] && count<size){
            count++;
            if(count==size){
                printf("True");
                return 1;
            }

        }

    }

    printf("False\n");
    return 0;
}