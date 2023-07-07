#include <iostream>
using namespace std;

// Node class for linked list
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }

    bool isEmpty() {
        return top == NULL;
    }

    void push(int data) {
        Node* newNode = new Node(data);
        if (top == NULL) {
            top = newNode;
        }
        else {
            newNode->next = top;
            top = newNode;
        }
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else {
            int data = top->data;
            Node* temp = top;
            top = top->next;
            delete temp;
            return data;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return -1;
        }
        else {
            return top->data;
        }
    }

    void display() {
        Node* temp = top;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    stack.display(); // Output: 30 20 10
    cout << "Popped element: " << stack.pop() << endl; // Output: Popped element: 30
    cout << "Peek element: " << stack.peek() << endl; // Output: Peek element: 20
    stack.display(); // Output: 20 10
    return 0;
}
