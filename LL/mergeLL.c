#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;


Node* createEvenNodes(int x){
    Node* head = NULL;
    Node* temp = NULL;

    for(int i=0; i<x; i++){
        if(i%2==0){
            Node* newNode = (Node *)malloc(sizeof(Node));
            newNode->data = i;
            newNode->next = NULL;

            if(temp == NULL){
                head = newNode;
                temp = newNode;
            }else{
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
    return head;
}

Node* createOddNodes(int x){
    Node* head = NULL;
    Node* temp = NULL;

    for(int i=0; i<x; i++){
        if(i%2!=0){
            Node* newNode = (Node *)malloc(sizeof(Node));
            newNode->data = i;
            newNode->next = NULL;

            if(temp == NULL){
                head = newNode;
                temp = newNode;
            }else{
                temp->next = newNode;
                temp = temp->next;
            }
        }
    }
    return head;
}


Node* mergedNodesFunc(Node* head1, Node* head2){
    Node* t1 = head1;
    Node* t2 = head2;

    Node* dummy;
    dummy->data = -1;
    dummy->next = NULL;

    Node* temp;
    temp = dummy;

    while(t1!=NULL && t2!=NULL){
        if(t1->data < t2->data){
            temp->next = t1;
            temp = t1;
            t1  = t1->next;
        }else{

            temp->next = t2;
            temp = t2;
            t2 = t2->next;
        }
    }

    Node* temp2 = t1;
    if(t1==NULL){
        temp2 = t2;
        temp->next = temp2;
    }

    return dummy->next;


}


int main(){

    Node* head1 = createEvenNodes(10);
    Node* head2 = createOddNodes(10);

    Node* temp;
    temp = head1;
    while(temp!=NULL){
        printf("temp->data: %d\n", temp->data);
        temp = temp->next;
    }

    printf("\n\n");

    temp = head2;
    while(temp!=NULL){
        printf("temp->data: %d\n", temp->data);
        temp = temp->next;
    }

    printf("\n\n");

    Node* mergedNodes = mergedNodesFunc(head1, head2);
    temp = mergedNodes;
    while(temp!=NULL){
        printf("temp->data: %d\n", temp->data);
        temp = temp->next;
    }





    return 0;
}