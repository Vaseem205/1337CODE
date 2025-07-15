/*


Minimum Deletions to Make a String Palindrome
Last Updated : 05 May, 2025
Given a string s of length n, the task is to remove or delete the minimum number of characters from the string so that the resultant string is a palindrome. 

Note: The order of characters should be maintained. 

Examples : 

    Input : s = "aebcbda"
    Output : 2
    Explanation: Remove characters 'e' and 'd'. Resultant string will be "abcba" which is a palindromic string

    Input: s = "aba"
    Output: 0
    Explanation: We don't remove any character.


*/


#include <stdio.h>
#include <string.h>


int checkPalindromeFunc(char* str, int size){
    int s = 0;
    int e = size-1;
    while(s<e){
        if(str[s]!=str[e]){
            return 0;
        }
        s++;
        e--;
    }

    return 1;
}

int main(){

    char str[] = "aebdba";
    int size = strlen(str);

    int checkPalindrome = checkPalindromeFunc(str, size);

    if(checkPalindrome){
        printf("Given string is palindrome");
    }else{
        printf("Given strin is NOT palindrome");

    }


    return 0;
}