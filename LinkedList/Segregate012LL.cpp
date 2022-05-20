Node* segregate012LL(Node *head) {
    if(!head) return head;
    Node *h0 = new Node(-1);
    Node *h1 = new Node(-1);
    Node *h2 = new Node(-1);
    Node *t0 = h0;
    Node *t1 = h1;
    Node *t2 = h2;
    Node *c = head;
    while(c) {
        if(c->data == 0) {
            t0->next = c;
            t0 = t0->next;
        }
        else if(c->data == 1) {
            t1->next = c;
            t1 = t1->next;
        }
        else if(c->data == 2) {
            t2->next = c;
            t2 = t2->next;
        }
        c = c->next;
    }
    
    if(h0->next == NULL) {
        t1->next = h2->next;
        t2->next = NULL;
        return h1->next;
    }
    else if(h1->next == NULL) {
        t0->next = h2->next;
        t2->next = NULL;
        return h0->next;
    }
    else if(h2->next == NULL) {
        t0->next = h1->next;
        t1->next = NULL;
        return h0->next;
    }
    else {
        t0->next = h1->next;
        t1->next = h2->next;
        t2->next = NULL;
        return h0->next;
    }
    return NULL;
}