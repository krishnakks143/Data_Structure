 node *temp = head;
    while(temp -> next != NULL){
        temp = temp -> next;
    }
    
    temp -> next = newNode;
    return head;