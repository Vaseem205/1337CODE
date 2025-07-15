#include <stdio.h>
#include <string.h>

void reverseString(char* str, int s, int e){
    while(s<e){
        str[s] = str[s]^str[e];
        str[e] = str[s]^str[e];
        str[s] = str[s]^str[e];
        s++;
        e--;
    }
}


int main(){

    char str[] = "thist       is not goodg";
    int size = strlen(str);

    int s = 0;
    int e;
    char c;

    for(int i =0; i<size; i++){

        c = str[i];
        printf("%c", str[i]);

        if(c == ' ' || i==(size-1)){
            e = i-1;
            if(str[s] == str[e]){
                reverseString(str, s, e);
            }
            s = i+1;
        }

    }

    printf("\n");
    for(int i=0; i<size; i++){
        printf("%c", str[i]);
    }

     


    return 0;
}