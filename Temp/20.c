#include <stdio.h>
#include <string.h>


int main(){

    char* str = "this is string";

    int size = strlen(str);

    printf("%s\n", str);

    for(char i=0; i<size; i++){

        // printf("%d\n", (int)str[i]);
        if(str[i] == 32){
            
            printf("Space Exist\n");
        }
    }




    return 0;
}