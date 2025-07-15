#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;


Node* intersetction(Node* l1, Node* l2){

    // Node* temp1 = l1;
    Node* temp2 = l2;

    while(temp2!=NULL){
        Node* temp1 = l1;
        while(temp1!=NULL){

            printf("MASTER: %d\n", temp2->data);
            printf("CHILD: %d\n", temp1->data);

            if(temp1->data==temp2->data){
                return temp1;
            }

            temp1 = temp1->next;
        }

        temp2 =  temp2->next;
        // printf("CHILD: 0x%p\n", temp2->next);
    }
    return NULL;
}


int main(){

    Node* node1_1 = (Node *)malloc(sizeof(Node));
    node1_1->data = 1;

    Node* node1_2 = (Node *)malloc(sizeof(Node));
    node1_2->data = 2;

    Node* node1_3 = (Node *)malloc(sizeof(Node));
    node1_3->data = 3;

    Node* node1_4 = (Node *)malloc(sizeof(Node));
    node1_4->data = 4;


    node1_1->next = node1_2;
    node1_1->next->next = node1_3;
    node1_1->next->next->next = node1_4;
    node1_4->next = NULL;


    Node* node2_1 = (Node *)malloc(sizeof(Node));
    node2_1->data = 5;

    Node* node2_2 = (Node *)malloc(sizeof(Node));
    node2_2->data = 6;

    node2_1->next = node2_2;
    node2_1->next->next = node1_3;


    Node* temp1 = node1_1;
    Node* temp2 = node2_1;

    while(temp1!=NULL){
        printf("temp1->data: %d\n", temp1->data);
        temp1 = temp1->next;
    }

    while(temp2!=NULL){
        printf("temp2->data: %d\n", temp2->data);
        temp2 = temp2->next;
    }


    Node* finValue = intersetction(node1_1, node2_1);

    if(finValue==NULL){
        printf("No intersection found\n");
    }else{
        printf("finValue: %d\n", finValue->data);
    }


    return 0;
}