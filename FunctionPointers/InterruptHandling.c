#include <stdio.h>

typedef void (*ISR)(int, int);

static ISR irq_table[2] = {0};

void registerISR(int irq, ISR handler) {
    if (irq < 2){
        irq_table[irq] = handler;
    }
}

void fireIRQ(int irq, int a, int b) {
    if (irq < 2 && irq_table[irq])
        irq_table[irq](a, b);
}

void onTimer(int a, int b){
    printf("TIMER: %d\n", a + b); 
}
void onUART(int a, int b){
    printf("UART: 0x%X\n", a);
}

int main(void) {
    registerISR(0, onTimer);
    registerISR(1, onUART);

    fireIRQ(0, 2, 3);    // calls onTimer → prints 5
    fireIRQ(1, 0x41, 0); // calls onUART  → prints 0x41
    return 0;
}
