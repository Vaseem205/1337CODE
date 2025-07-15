#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct Stack{
    char arr[MAX];
    int bottom;
}Stack;

void push(Stack *s, char c){
    if(s->bottom<MAX-1){
        s->arr[++(s->bottom)] == c;
    }
}

void pop(Stack *s){
    if(s->bottom>=0){
        s->arr[(s->bottom)--];
    }
}

int balancedParanthesis(char* str, int n){

    Stack s;
    s.bottom=-1;

    int count =0;
    if(n==0){
        return -1;
    }
    
    int size = n;
    char c;

    for(int i=0; i<size; i++){
        c = str[i];
        if(c=='('){
            push(&s, c);
        }else if(c==')' && s.bottom>=0){
            pop(&s);
            count++;
        }
    }

    return count;
}

int main(){

    char str[] = "(()))))))(";
    int size = strlen(str);

    int val = balancedParanthesis(str, size);

    printf("val: %d", val);

    return 0;
}