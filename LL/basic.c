/*
1. Node Insertion at start
2. Node Insertion at end
3. Node Deletion
4. Remove Duplicates
5. Reverse Nodes
*/


#include <stdio.h>
#include <stdlib.h>


typedef struct Node{
    int data;
    struct Node* next;
}Node;


Node* nodeInsertionEndFunc(int x){

    Node* head = NULL;
    Node* temp = NULL;

    for(int i=0; i<x; i++){
        Node* newNode = (Node *)malloc(sizeof(Node));
        newNode->data = i+1;
        newNode->next = NULL;

        if(temp==NULL){
            temp = newNode;
            head = newNode;
        }else{
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return head;
}


Node* nodeInsertionFrontFunc(int x){

    Node* head = NULL;
    Node* temp = NULL;
    
    for(int i=0; i<x; i++){
        Node* newNode = (Node *)malloc(sizeof(Node));
        newNode->data = i+1;
        newNode->next = temp;
        temp = newNode;
        head = temp;
    }
    return head;
}

Node* reverseFunc(Node* head){

    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    head = prev;
    return head;
}

Node* nodeDeletionFunc(Node* head, int target){
    Node* temp = head;
    Node* prev = NULL;
    Node* next = NULL;


    for(int i=0; i<target; i++){
        prev=temp;
        temp = temp->next;
    }
    next = temp->next;
    prev->next = next;

    return head;
}

Node* createDuplicateNodesFunc(int x){

    Node* head = NULL;
    Node* temp = NULL;
    int value;
    for(int i=0; i<x; i++){
        if(i%3 ==0){
            value = i;
        }
        Node* newNode = (Node *)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;

        if(temp==NULL){
            head = newNode;
            temp = newNode;
        }else{
            temp->next = newNode;
            temp = temp->next;
        }
    }
    return head;
}

Node* removeDuplicateNodesFunc(Node* head){
    Node* temp = head;
    Node* next = NULL;

    while(temp->next!=NULL){
        if(temp->data==temp->next->data){
            next = temp->next->next;
            free(temp->next);
            temp->next = next;
        }else{
            temp = temp->next;
        }
    }

    return head;
}

Node* addNewNode(int data, Node* head) {
    Node* newNode = (Node *)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = head;
    head=newNode;
    return head;
}

Node* addTwoNumbersFunc(Node* head1, Node* head2){
    Node* temp1 = head1;
    Node* temp2 = head2;
    Node* resultHead = NULL;

    temp1 = reverseFunc(temp1);
    temp2 = reverseFunc(temp2);

    int sum, carry=0, addData;

    while(temp1!=NULL && temp2!=NULL){
        sum = temp1->data + temp2->data + carry;
        carry = sum/10;
        addData = sum%10;

        resultHead = addNewNode(addData, resultHead);
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    Node* temp3 = temp1;
    if(temp1==NULL){
        temp3=temp2;
    }

    while(temp3!=NULL){

        sum = temp3->data + carry;
        carry = sum/10;
        addData = sum%10;

        resultHead = addNewNode(addData, resultHead);
        temp3 = temp3->next;
    }

    return resultHead;
}




int main(){

    Node* temp = NULL;
    Node* nodeInsertionEnd = nodeInsertionEndFunc(10);
    temp = nodeInsertionEnd;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n\n");
    Node* nodeInsertionFront = nodeInsertionFrontFunc(10);
    temp = nodeInsertionFront;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n\n");
    Node* reverse = reverseFunc(nodeInsertionFront);
    temp = reverse;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n\n");
    Node* nodeDeletion = nodeDeletionFunc(reverse, 5);
    temp = nodeDeletion;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n\n");
    Node* createDuplicateNodes = createDuplicateNodesFunc(9);
    temp = createDuplicateNodes;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }

    printf("\n\n");
    Node* removeDuplicateNodes = removeDuplicateNodesFunc(createDuplicateNodes);
    temp = removeDuplicateNodes;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }


    printf("\n\n");
    Node* addTwoNumbers =  addTwoNumbersFunc(removeDuplicateNodes, nodeInsertionEnd);
    temp = addTwoNumbers;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }


    return 0;
}