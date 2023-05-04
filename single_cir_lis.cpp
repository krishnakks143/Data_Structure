#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
};

void insertStart(node **head, int val){
    node *newNode = new node;
    newNode -> data = val;
    newNode -> next = newNode;
    
    if(*head == NULL){
        *head = newNode;
        return;
    }
    
    node *temp = *head;
    while(temp -> next != *head){
        temp = temp -> next;
    }
    
    temp -> next = newNode;
    newNode -> next = *head;
    *head = newNode;
}

node* insertEnd(node *head, int val){
    node *newNode = new node;
    newNode -> data = val;
    newNode -> next = newNode;
    
    if(head == NULL){
        head = newNode;
        return head;
    }
    
    node *temp = head;
    while(temp -> next != head){
        temp = temp -> next;
    }
    
    temp -> next = newNode;
    newNode -> next = head;
    return head;
}

node* insertSpecified(node* head, int val, int pos){
    node *newNode = new node;
    newNode -> data = val;
    newNode -> next = newNode;
    
    if (head == NULL){
        if (pos != 0){
            cout << "invalid pos" << endl;
            cout << endl << "---------" << endl;
            return head;
        }
        else{
            head = newNode;
            return head;
        }
    }
    
    if (pos == 0){
        insertStart(&head, val);
        return head;
    }
    
    int ind = 0;
    node *temp = head;
    
    while(ind < pos - 1 && temp -> next != head){
        temp = temp -> next;
        ind++;
    }
    
    if (ind != pos - 1){
        cout << "invalid index" << " ind: " << pos;
        cout << endl << "---------" << endl;
        return head;
    }
    
    newNode -> next = temp -> next;
    temp -> next = newNode;
    return head;
}

int main(){
    node *head = NULL;
    
    head = insertSpecified(head, 10, 2);
    
    insertStart(&head, 1);
    insertStart(&head, 2);
    insertStart(&head, 3);
    insertStart(&head, 4);
    insertStart(&head, 5);
    insertStart(&head, 6);
    
    node *temp = head -> next;
    cout << head -> data << " ";
    while(temp != head){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl << "---------" << endl;
    
    head = insertEnd(head, 7);
    head = insertEnd(head, 8);
    head = insertEnd(head, 9);
    head = insertEnd(head, 10);
    
    temp = head -> next;
    cout << head -> data << " ";
    while(temp != head){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl << "---------" << endl;
    
    head = insertSpecified(head, 10, 2);
    head = insertSpecified(head, 15, 0);
    head = insertSpecified(head, 13, 15);
    head = insertSpecified(head, 19, 4);
    
    temp = head -> next;
    cout << head -> data << " ";
    while(temp != head){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    return 0;
}