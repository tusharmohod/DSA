Node *merge(Node *left, Node *right) {
    if(!left) return right;
    if(!right) return left;
    
    Node *h = new Node(-1);
    Node *t = h;
    
    while(left && right) {
        if(left->data <= right->data) {
            t->next = left;
            left->prev = t;
            t = left;
            left = left->next;
        }
        else {
            t->next = right;
            right->prev = t;
            t = right;
            right = right->next;
        }
    }
    
    if(left) {
        t->next = left;
        left->prev = t;
    }
    if(right) {
        t->next = right;
        right->prev = t;
    }
    
    h = h->next;
    h->prev = NULL;
    return h;
}

struct Node *mergeSortDoublyLL(struct Node *head) {
    if(!head || !head->next) {
        return head;
    }
    
    Node *s = head, *f = head;
    while(f->next && f->next->next) {
        s = s->next;
        f = f->next->next;
    }
    
    Node *mid = s;
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;
    right->prev = NULL;
    left = mergeSortDoublyLL(left);
    right = mergeSortDoublyLL(right);
    return merge(left, right);
}