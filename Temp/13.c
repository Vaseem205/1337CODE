#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Create a linked list with values 1 to x
Node* createNodes(int x) {
    Node* head = NULL;
    Node* temp = NULL;
    for (int i = 0; i < x; i++) {
        Node* node = (Node*)malloc(sizeof(Node));
        node->data = i + 1;
        node->next = NULL;
        if (head == NULL) {
            head = node;
            temp = node;
        } else {
            temp->next = node;
            temp = node;
        }
    }
    return head;
}

// Reverse a linked list
Node* reverseNodes(Node* node) {
    Node* prev = NULL;
    Node* current = node;
    Node* next = NULL;
    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}

// Create a single node with given value
Node* createNode(int val) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = val;
    node->next = NULL;
    return node;
}

// Print the linked list
void printList(Node* head) {
    while (head != NULL) {
        printf("data: %d\n", head->data);
        head = head->next;
    }
}

// Free the linked list
void freeList(Node* head) {
    Node* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int carry = 0, sum = 0;

    // Example: 3-digit and 5-digit numbers
    Node* node1 = createNodes(3); // 1->2->3
    Node* node2 = createNodes(5); // 1->2->3->4->5

    // Reverse both lists to make addition easier (least significant digit first)
    node1 = reverseNodes(node1);
    node2 = reverseNodes(node2);

    Node *head1 = node1, *head2 = node2;
    Node *finHead = NULL, *finCurr = NULL;

    // Add corresponding digits
    while (head1 != NULL || head2 != NULL || carry != 0) {
        int val1 = (head1 != NULL) ? head1->data : 0;
        int val2 = (head2 != NULL) ? head2->data : 0;
        sum = val1 + val2 + carry;
        carry = sum / 10;
        sum = sum % 10;

        Node* newNode = createNode(sum);
        if (finHead == NULL) {
            finHead = newNode;
            finCurr = newNode;
        } else {
            finCurr->next = newNode;
            finCurr = finCurr->next;
        }

        if (head1 != NULL) head1 = head1->next;
        if (head2 != NULL) head2 = head2->next;
    }

    // Reverse the result to get the final sum in correct order
    finHead = reverseNodes(finHead);

    // Print the result
    printList(finHead);

    // Free memory (good practice)
    freeList(node1);
    freeList(node2);
    freeList(finHead);

    return 0;
}
