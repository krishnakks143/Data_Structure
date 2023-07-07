// stack using array

#include<bits/stdc++.h>
using namespace std;

int arr[100];
int top = -1;
int len = 100;

void push(int val){
    if (top == len - 1){
        cout << "stack is full" << endl;
        return;
    }
    top++;
    arr[top] = val;
}

void pop(){
    if (top == -1){
        cout << "stack is empty" << endl;
        return;
    }
    cout << "deleted:- " << arr[top] << endl;
    top--;
}

int getTop(){
    if (top == -1){
        cout << "stack is empty" << endl;
        return -1;
    }
    return arr[top];
}

void traverse(){
    cout << "stack:- ";
    for(int i = 0;i <= top;++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    push(6);
    
    traverse();
    
    pop();
    
    traverse();
    
    top = getTop();
    cout << "top:- " << top << endl;
    return 0;
    
}