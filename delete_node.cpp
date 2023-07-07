#include <iostream>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

void deleteNode(ListNode* node) {
    // If the given node is the last node, we can simply delete it
    if (node->next == nullptr) {
        delete node;
        node = nullptr;
    }
    else {
        // Copy the value of the next node to the current node and delete the next node
        node->val = node->next->val;
        ListNode* temp = node->next;
        node->next = node->next->next;
        delete temp;
        temp = nullptr;
    }
}

int main() {
    ListNode* head = new ListNode(4);
    head->next = new ListNode(5);
    head->next->next = new ListNode(1);
    head->next->next->next = new ListNode(9);

    ListNode* nodeToDelete = head->next;

    cout << "Before deleting the node: ";
    ListNode* current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    deleteNode(nodeToDelete);

    cout << "After deleting the node: ";
    current = head;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;

    return 0;
}
