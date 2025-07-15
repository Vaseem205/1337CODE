#include <stdio.h>
#include <stdlib.h>

#define MAX 5 // Small size to test wrapping easily

typedef struct CircularBuffer
{
    int data[MAX];
    int head; // Read position
    int tail; // Write position
    int size; // Number of elements in buffer
} CircularBuffer;

// Initialize buffer
void initBuffer(CircularBuffer *cb)
{
    cb->head = 0;
    cb->tail = 0;
    cb->size = 0;
}

// Check whether buffer is empty
int isEmpty(CircularBuffer *cb)
{
    return cb->size == 0;
}

// Check whether buffer is full
int isFull(CircularBuffer *cb)
{
    return cb->size == MAX;
}

// Add an element to buffer
void enqueue(CircularBuffer *cb, int value)
{
    if (isFull(cb))
    {
        printf("Buffer is full! Cannot enqueue %d\n", value);
        return;
    }

    cb->data[cb->tail] = value;
    cb->tail = (cb->tail + 1) % MAX;
    cb->size++;
}

// Remove and return element from buffer
int dequeue(CircularBuffer *cb)
{
    if (isEmpty(cb))
    {
        printf("Buffer is empty! Cannot dequeue.\n");
        return -1; // Or some sentinel
    }

    int value = cb->data[cb->head];
    cb->head = (cb->head + 1) % MAX;
    cb->size--;

    return value;
}

void printBuffer(CircularBuffer *cb)
{
    printf("Buffer: ");
    for (int i = 0; i < cb->size; i++)
    {
        int index = (cb->head + i) % MAX;
        printf("%d ", cb->data[index]);
    }
    printf("\n");
}

// Main function to test
int main()
{
    CircularBuffer cb;
    initBuffer(&cb);

    enqueue(&cb, 10);
    enqueue(&cb, 20);
    enqueue(&cb, 30);
    enqueue(&cb, 40);
    enqueue(&cb, 50);
    enqueue(&cb, 60); // Should print full

    printBuffer(&cb);

    printf("Dequeued: %d\n", dequeue(&cb));
    printf("Dequeued: %d\n", dequeue(&cb));

    printBuffer(&cb);

    enqueue(&cb, 60);
    enqueue(&cb, 70);

    printBuffer(&cb);

    return 0;
}
