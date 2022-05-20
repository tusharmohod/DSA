Node *swapKthNode(Node* head, int num, int k) {
    Node *temp = new Node(-1), *p1 = temp, *p2 = temp;
    temp->next = head;
    while(--k) {
        p1 = p1->next;
        if(p1->next == NULL) {
            return head;
        }
    }
    Node* temp1 = p1->next;
    p2 = temp;
    while(temp1->next != NULL) {
        p2 = p2->next;
        temp1 = temp1->next;
    }
    swap(p1->next, p2->next);
    swap(p1->next->next, p2->next->next);
    return temp->next;
}