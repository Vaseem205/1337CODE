/*

Detect the LL loop;
Detect teh Starting Point of LL Loop
Detect the Intersection point in LL

*/


#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;


int isCircular(Node* head) {
    Node* slow = head;
    Node* fast = head;

    while (slow && fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast){
            return 1;                   // Circular
        }
        
    }
    return 0; // Not circular
}

Node* startingPointOfLoop(Node* head) {
    Node* slow = head;
    Node* fast = head;

    // Step 1: Detect loop
    while (slow && fast && fast->next) {

        slow = slow->next;
        fast = fast->next->next;
        
        if (slow == fast) {
            slow = head;
            while (slow != fast) {
                slow = slow->next;
                fast = fast->next;
            }
            return slow; // Starting point of loop
        }

        
    }

    return NULL; // No loop
}


Node* getIntersectionNode(Node* head1, Node* head2) {
    Node* t1 = head1;
    Node* t2 = head2;

    while (t1 != t2) {
        t1 = t1->next;
        t2 = t2->next;

        if (t1 == NULL) {
            t1 = head2;
        }

        if (t2 == NULL) {
            t2 = head1;
        }
    }

    return t1; // Intersection node or NULL if no intersection
}

Node* newNode(int data) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = data;
    node->next = NULL;
    return node;
}


int main() {
    // Example list: 1 -> 2 -> 3 -> 4 -> 5
    Node* head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    // Create a loop for testing
    head->next->next->next->next->next = head->next; // 5 -> 2

    Node* final = startingPointOfLoop(head);

    if (final)
        printf("Data: %d\n", final->data);
    else
        printf("No loop in linked list\n");

    return 0;
}
