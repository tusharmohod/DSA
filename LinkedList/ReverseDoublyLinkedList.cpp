Node* reverseDoublyLinkedList(Node *head) {
    if(!head || !head->next) {
        return head;
    }
    Node *p = NULL;
    Node *c = head;
    Node *n = c->next;
    while(c) {
        c->next = p;
        c->prev = n;
        p = c;
        c = n;
        n = (n == nullptr) ? nullptr : n->next;
    }
    return p;
}