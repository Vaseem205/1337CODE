#include <stdio.h>

typedef void (*fp)(int, int);

void f1(int a, int b){
    printf("sum: %d\n", a+b);
    return;
}

void f2(int a, int b){
    printf("mul: %d\n", a*b);
    return;
}


void callBackFunc(fp a, int x, int y){
    a(x, y);
    return;
}


int main(){
    
    
    fp a;
    
    a = f1;
    a(2,3);
    
    a = f2;
    a(2,3);
    
    callBackFunc(f1, 5, 4);
    callBackFunc(f2, 5, 4);
    
    return 0;
}