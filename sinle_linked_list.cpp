#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void insertStart(node **head, int val){
    node *newNode = new node;
    newNode -> data = val;
    newNode -> next = NULL;
    
    if(*head == NULL){
        *head = newNode;
        return;
    }
    
    newNode -> next = *head;
    *head = newNode;
}

node* insertEnd(node *head, int val){
    node *newNode = new node;
    newNode -> data = val;
    newNode -> next = NULL;
    
    if(head == NULL){
        head = newNode;
        return head;
    }
    
    node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> next = newNode;
    return head;
}

int main(){
    node *head = NULL;
    
    insertStart(&head, 1);
    insertStart(&head, 2);
    insertStart(&head, 3);
    insertStart(&head, 4);
    insertStart(&head, 5);
    insertStart(&head, 6);
    
    head = insertEnd(head, 7);
    head = insertEnd(head, 8);
    head = insertEnd(head, 9);
    head = insertEnd(head, 10);
    
    node *temp = head;
    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return 0;
}