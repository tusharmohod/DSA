Node* deleteAtEndDoublyLL(Node *head) {
	if(!head) {
        return NULL;
    }
    if(!head->next) {
        delete(head);
        return NULL;
    }
    Node *c = head;
    while(c->next->next) {
        c = c->next;
    }
    delete(c->next);
    c->next = NULL;
    return head;
}