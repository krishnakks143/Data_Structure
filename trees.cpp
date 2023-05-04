#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};

node* insert(int val, node* root){
    if (root == NULL){
        node* newNode = new node;
        newNode -> left = newNode -> right = NULL;
        newNode -> data = val;
        return newNode;
    }
    
    if (root -> data < val){
        root -> right = insert(val, root -> right);
    }
    else if(root -> data > val){
        root -> left = insert(val, root -> left);
    }
    return root;
}

void inorder(node* root){
    if (root == NULL){
        return;
    }
    
    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

void preorder(node* root){
    if (root == NULL){
        return;
    }
    
    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

void postorder(node* root){
    if (root == NULL){
        return;
    }
    
    postorder(root -> left);
    postorder(root -> right);
    cout << root -> data << " ";
}

int minElement(node* root){
    node* temp = root;
    while(temp != NULL && temp -> left != NULL){
        temp = temp -> left;
    }
    return temp -> data;
}

node* deleteNode(int val, node* root){
    if(root == NULL){
        return root;
    }
    
    if(root -> data < val){
        root -> right = deleteNode(val, root -> right);
    }
    else if(root -> data > val){
        root -> left = deleteNode(val, root -> left);
    }
    
    if (root -> data == val){
        if (root -> left == NULL && root -> right == NULL){
            return NULL;
        }
        if (root -> left == NULL && root -> right != NULL){
            return root -> right;
        }
        if (root -> right == NULL && root -> left != NULL){
            return root -> left;
        }
        int inSuc = minElement(root -> right);
        root -> data = inSuc;
        root -> right = deleteNode(inSuc, root -> right);
    }
    return root;
}

int main(){
    node* root = NULL;
    root = insert(6, root);
    root = insert(15, root);
    root = insert(1, root);
    root = insert(20, root);
    root = insert(3, root);
    root = insert(5, root);
    
    cout << "inorder: ";
    inorder(root);
    cout << endl;
    
    cout << "preorder: ";
    preorder(root);
    cout << endl;
    
    cout << "postorder: ";
    postorder(root);
    cout << endl;
    
    root = deleteNode(15, root);
    cout << "inorder: ";
    inorder(root);
    cout << endl;
    
    root = deleteNode(6, root);
    cout << "inorder: ";
    inorder(root);
    cout << endl;
    
    cout << "root: " << root -> data << endl;
    return 0;
}