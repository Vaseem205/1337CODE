#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;


Node* createNodesAtEndFunc(int x){
    Node* head = NULL;
    Node* temp = NULL;

    for(int i=0; i<x; i++){
        Node* newNode = (Node *)malloc(sizeof(Node));
        newNode->data = i+1;
        newNode->next = NULL;
        newNode->prev = NULL;

        if(temp==NULL){
            head = newNode;
            temp = newNode;
        }else{
            temp->next = newNode;
            newNode->prev = temp;
            temp = temp->next;
        }
    }
    return head;
}


Node* createNodesAtFrontFunc(int x){
    Node* head = NULL;
    Node* temp = NULL;
    for(int i=0; i<x; i++){
        Node* newNode = (Node *)malloc(sizeof(Node));
        newNode->data = i+1;
        newNode->prev=NULL;
        newNode->next=temp;

        if (temp != NULL) {
            temp->prev = newNode;
        }

        temp = newNode;
        head = temp;
    }

    return head;
}


Node* reverseFunc(Node* head) {
    Node* temp = NULL;
    Node* current = head;

    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    return temp->prev;
}



int main(){

    Node* temp;
    Node* tail;
    Node* createNodesAtEnd = createNodesAtEndFunc(10);
    temp = createNodesAtEnd;
    while(temp!=NULL){
        printf("temp->data: %d\n", temp->data);
        if(temp->next == NULL){
            tail = temp;
        }
        temp = temp->next;
    }

    printf("Printing in Reverse Order:\n");
    while(tail!=NULL){
        printf("tail->data: %d\n", tail->data);
        tail = tail->prev;
    }

    printf("\n\n");
    Node* createNodesAtFront = createNodesAtFrontFunc(5);
    temp = createNodesAtFront;
    while(temp!=NULL){
        printf("temp->data: %d\n", temp->data);
        if(temp->next == NULL){
            tail = temp;
        }
        temp = temp->next;
    }

    printf("Printing in Reverse Order:\n");
    while(tail!=NULL){
        printf("tail->data: %d\n", tail->data);
        tail = tail->prev;
    }


    printf("\n\n");
    Node* reversed = reverseFunc(createNodesAtEnd);
    temp = createNodesAtFront;
    while(temp!=NULL){
        printf("temp->data: %d\n", temp->data);
        temp = temp->next;
    }













    return 0;
}