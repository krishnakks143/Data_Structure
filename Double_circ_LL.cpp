#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node *insertStart(node *head, int val)
{
    node *newNode = new node;
    newNode->data = val;
    newNode->next = newNode;
    newNode->prev = newNode;

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->next = head;
    newNode->prev = temp;
    head->prev = newNode;
    head = newNode;
    return head;
}

node *insertEnd(node *head, int val)
{
    node *newNode = new node;
    newNode->data = val;
    newNode->next = newNode;
    newNode->prev = newNode;

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    node *temp = head->prev;

    newNode->next = head;
    newNode->prev = temp;
    temp->next = newNode;
    head->prev = newNode;
    return head;
}

node *deleteStart(node *head)
{
    if (head == NULL)
    {
        cout << "LL is already empty" << endl;
        return head;
    }

    if (head->next == NULL)
    {
        head = NULL;
        return head;
    }

    node *temp = head->prev;

    head = head->next;
    head->prev = temp;
    temp->next = head;
    return head;
}

node *deleteEnd(node *head)
{
    if (head == NULL)
    {
        cout << "LL is already empty" << endl;
        return head;
    }

    if (head->next == NULL)
    {
        head = NULL;
        return head;
    }

    node *temp = head->prev;

    temp->prev->next = head;
    head->prev = temp->prev;
    return head;
}

int main()
{
    node *head = NULL;

    head = insertStart(head, 1);
    head = insertStart(head, 2);
    head = insertStart(head, 3);
    head = insertStart(head, 4);
    head = insertStart(head, 5);
    head = insertStart(head, 6);

    node *temp = head->next;
    cout << head->data << " ";
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;

    head = insertEnd(head, 7);
    head = insertEnd(head, 8);
    head = insertEnd(head, 9);
    head = insertEnd(head, 10);

    temp = head->next;
    cout << head->data << " ";
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;

    head = deleteStart(head);
    temp = head->next;
    cout << head->data << " ";
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;

    head = deleteEnd(head);
    temp = head->next;
    cout << head->data << " ";
    while (temp != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;
    return 0;
}