Node* cloneLL(Node *head) {
    Node *curr = head;
    Node *n = NULL;
    
    while(curr) {
        n = curr->next;
        curr->next = new Node(curr->data);
        curr->next->next = n;
        curr = n;
    }
    
    curr = head;
    
    while(curr) {
        curr->next->random = (curr->random) ? curr->random->next : NULL;
        curr = curr->next->next;
    }
    
    Node *newHead = head->next;
    Node *ogHead = head;
    Node *dupHead = head->next;
    
    while(ogHead && dupHead) {
        ogHead->next = (ogHead->next) ? ogHead->next->next : NULL;
        dupHead->next = (dupHead->next) ? dupHead->next->next : NULL;
        ogHead = ogHead->next;
        dupHead = dupHead->next;
    }
    
    return newHead;
}