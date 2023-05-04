#include<bits/stdc++.h>
using namespace std;

int q[6];
int len = 6;
int front = -1;
int rear = -1;

// simple q

void enq(int v){
    if(rear == len - 1){
        cout << "q is full" << endl;
        return;
    }
    if (front == -1){
        front++;
    }
    rear++;
    q[rear] = v;
}

void deq(){
    if(front == -1){
        cout << "q is empty" << endl;
        return;
    }
    if(front == rear){
        front = rear = -1;
        return;
    }
    front++;
    
}

bool isEmpty(){
    if(front == -1){
        return true;
    }
    return false;
}

void trav(){
    if (isEmpty()){
        return;
    }
    cout << "q: ";
    for (int i = front; i <= rear;++i){
        cout << q[i] << " ";
    }
    cout << endl;
}

bool isFull(){
    if (rear == len - 1){
        return true;
    }
    return false;
}

//circular q

bool isFullC(){
    if ((front == 0 && rear == len -1) || rear + 1 == front){
        return true;
    }
    return false;
}

void enqC(int v){
    if((front == 0 && rear == len -1) || rear + 1 == front){
        cout << "q is full" << endl;
        return;
    }
    if (rear == len - 1){
        rear = 0;
    }else if (front == -1){
        rear = 0;
        front = 0;
    }else{
        rear++;
    }
    q[rear] = v;
}

void travC(){
    if (isEmpty()){
        return;
    }
    cout << "q: ";
    for (int i = front; i != rear;++i){
        cout << q[i] << " ";
        if(i == len - 1 && i != rear){
            i = -1;
        }
    }
    cout << q[rear] << endl;
    cout << endl;
}

void deqC(){
    if(front == -1){
        cout << "q is empty" << endl;
        return;
    }
    if(front == rear){
        front = rear = -1;
        return;
    }
    front++;
    
}



int main(){
    cout << "isEmpty(): " << isEmpty() << endl;
    trav();
    enq(1);
    enq(2);
    enq(3);
    enq(4);
    enq(5);
    enq(6);
    
    trav();
    
    deq();
    deq();
    
    trav();
    
    cout << "isEmpty(): " << isEmpty() << endl;
    cout << "isFull(): " << isFull() << endl;
    cout <<"-----------------" << endl;
    enq(7);
    enqC(7);
    travC();
    cout << "isFull(): " << isFullC() << endl;
    enqC(8);
    travC();
    cout << "isFull(): " << isFullC() << endl;
    return 0;
}