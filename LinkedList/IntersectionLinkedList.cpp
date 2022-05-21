int intersectionLinkedList(Node* head1, Node* head2) {
    if(!head1 || !head2) return -1;
    int n1 = 0, n2 = 0;
    Node *t = head1;
    while(t) {
        t = t->next;
        n1++;
    }
    t = head2;
    while(t) {
        t = t->next;
        n2++;
    }
    int diff = abs(n2 - n1);
    if(n1 > n2) {
        for(int i = 0; i < diff; i++) {
            head1 = head1->next;
        }
        while(head1 && head2) {
            if(head1 == head2) {
                return head1->data;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    else {
        for(int i = 0; i < diff; i++) {
            head2 = head2->next;
        }
        while(head1 && head2) {
            if(head1 == head2) {
                return head1->data;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return -1;
}