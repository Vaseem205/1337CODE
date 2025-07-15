#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int x;
    struct Node* next;
} Node;


Node* addNodesInFront(int x){
    Node* temp = NULL;
    for(int i=0; i<x; i++){
        Node* node = (Node *)malloc(sizeof(Node));
        node->x = i+1;
        node->next = temp;
        temp = node;
    }
    return temp;
}


Node* addNodesAtEnd(int x){
    Node* temp = NULL;
    Node* head = NULL;
    for(int i=0; i<x; i++){        
        Node* node = (Node *)malloc(sizeof(Node));
        node->x = i+1;
        node->next = NULL;
        if(temp==NULL){
            head = node;            // to remember the start of the linkedlist
            temp = node;            // temp pointing to newly created node
        }else{
            temp->next = node;
            temp = node;
        }
    }
    return head;
}

int main(){

    Node* node1 = NULL;
    Node* temp1 = NULL;

    Node* node2 = NULL;
    Node* temp2 = NULL;

    node1 = addNodesInFront(5);
    temp1 = node1;
    while(temp1!=NULL){
        printf("node->data: %d\n", temp1->x);
        temp1 = temp1->next;
    }

    printf("\n\n");

    node2 = addNodesAtEnd(5);
    temp2 = node2;
    while(temp2!=NULL){
        printf("node->data: %d\n", temp2->x);
        temp2 = temp2->next;
    }

    return 0;
}