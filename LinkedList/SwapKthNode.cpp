Node *swapkthnode(Node* head, int num, int k) {
    if(!head || !head->next) {
        return head;
    }
    Node *p1 = NULL, *p2 = NULL, *t1 = NULL, *t2 = NULL;
    Node *s = head, *f = head;
    int len = 0;
    for(int i = 0; i < k; i++){
        if(f == NULL) {
            return head;
        }
        f = f->next;
        len++;
    }
    while(f) {
        p2 = s;
        s = s->next;
        f = f->next;
        len++;
    }
    
    t2 = s;

    s = head;
    for(int i = 0; i < (k - 1); i++) {
        p1 = s;
        s = s -> next;
    }
    
    t1 = s;
    
    if(k > (len >> 1)) {
        Node *temp = t1;
        t1 = t2;
        t2 = temp;
        temp = p1;
        p1 = p2;
        p2 = temp;
    }

    if(len == 2) {
        t2->next = t1;
        t1->next = NULL;
        return t2;
    }
    else if(t1 == t2) {
        return head;
    }
    else if(k == 1 || k == len) {
        head = head->next;
        p2->next = t1;
        t2->next = head;
        head = t2;
        t1->next = NULL;
        return head;
    }
    if(p1->next == p2) {
        p2->next = t2->next;
        p1->next = t1->next;
        p1->next = t1;
        t2->next = p2;
        p1->next = t2;
        return head;
    }
    else {
        p1->next = t1->next;
        p2->next = t2->next;
        t2->next = p1->next;
        p1->next = t2;
        t1->next = p2->next;
        p2->next = t1;
        return head;
    }
    
    return head;
}