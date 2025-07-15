#include <stdio.h>

typedef void (*fp)(int, int);

void add(int a, int b){
    printf("sum: %d\n", a+b);
}

void sub(int a, int b){
    printf("sub: %d\n", a-b);
}


int main(){

    // fp a;

    // int op;

    // printf("Chose Operation:\n1. ADD\n2. SUB\n");
    // scanf("%d", &op);

    // switch (op){
    //     case 1:
    //         a = add;
    //         add(7,5);
    //         break;
    //     case 2:
    //         a = sub;
    //         sub(6,5);
    //         break;
    //     default:
    //         printf("Chose correct operation\n");
    //         return 1;
    // }

    int start = 3;
    int end = 5;
    int mask = (((1<<(end-start+1))-1)<<start);
    int temp = 0xFFFF;
    printf("mask: 0x%x", mask);
    printf("value: 0x%x", temp^mask);
    return 0;
}


/*

(((1<<(end-start+1))-1)<<start)


(((1<<(end-start+1))-1)<<start)

*/