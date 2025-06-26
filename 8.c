#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
} Node;

Node* createNodes(int x){
    Node* temp = NULL;
    Node* head = NULL;
    for(int i=0; i<x; i++){
        Node* node = (Node *)malloc(sizeof(Node));
        node->data = i+1;
        node->next = NULL;
        if(temp==NULL){
            head = node;
            temp = node;
        }else{
            temp->next = node;
            temp = node;
        }
    }
    return head;
}

Node* reveresedLinkedList(Node** head){
    Node* next = NULL;
    Node* prev = NULL;
    Node* current = *head;
    while(current!=NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
    return *head;
}


int main(){

    Node* node = NULL;
    Node* temp = NULL;
    Node* temp1 = NULL;
    Node* reverse = NULL;
    node = createNodes(5);

    temp = node;
    while(temp!=NULL){
        printf("node->data: %d\n", temp->data);
        temp = temp->next;
    }

    printf("\n\n");

    reverse = node;
    Node* revLL = reveresedLinkedList(&reverse);
    temp1 = revLL;
    while(temp1!=NULL){
        printf("node->data: %d\n", temp1->data);
        temp1 = temp1->next;
    }





    return 0;
}