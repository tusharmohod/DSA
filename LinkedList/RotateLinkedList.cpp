Node* rotateLinkedList(Node* head, int k) {
    if(!head || !head->next) return head;
    Node *t = head;
    while(t->next) {
        t = t->next;
    }
    for(int i = 0; i < k; i++) {
        Node *t1 = head;
        head = head->next;
        t->next = t1;
        t = t->next;
        t->next = NULL;
    }
    return head;
}