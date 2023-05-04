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
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    return head;
}

node *insertEnd(node *head, int val)
{
    node *newNode = new node;
    newNode->data = val;
    newNode->next = NULL;
    newNode->prev = NULL;

    if (head == NULL)
    {
        head = newNode;
        return head;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    newNode->prev = temp;
    temp->next = newNode;
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

    head->next->prev = NULL;
    head = head->next;
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

    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = NULL;
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

    node *temp = head;
    while (temp != NULL)
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

    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;

    head = deleteStart(head);
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;

    head = deleteEnd(head);
    temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl
         << "---------" << endl;
    return 0;
}