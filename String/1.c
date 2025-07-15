/*

Finding a sub-string in a given string

*/

#include <stdio.h>
#include <string.h>

int main(){

    char* str = "thinkpad";
    char* subStr = "ink";
    int sizeStr = strlen(str);
    int sizeSub = strlen(subStr);
    int ssc = 0;

    for(int i=0; i<sizeStr; i++){
        while(str[i]==subStr[ssc]){
            if(ssc=sizeSub){
                printf("sub-string is present");
                return 1;
            }   
            i++;
            ssc++;
        }
    }
    printf("sub-string is NOT present");
    return 0;
}