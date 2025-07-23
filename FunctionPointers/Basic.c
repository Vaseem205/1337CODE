#include <stdio.h>

void f1(int a, int b){
    printf("sum: %d\n", a+b);
}

void f2(int a, int b){
    printf("mul: %d\n", a*b);
}

int main(){

    typedef void (*fp)(int, int);
    fp a;
    a  = f1;
    a(2,3);

    a=f2;
    a(2,3);

    return 0;

}

/*

OUTPUT:
sum: 5
mul: 6

*/



