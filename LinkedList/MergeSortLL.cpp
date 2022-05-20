Node *merge(Node *left, Node *right) {
    if(left == NULL) return right;
    if(right == NULL) return left;
    
    Node *h = new Node(-1);
    Node *t = h;
    
    while(left != NULL && right != NULL) {
        if(left->data <= right->data) {
            t->next = left;
            t = left;
            left = left->next;
        }
        else {
            t->next = right;
            t = right;
            right = right->next;
        }
    }
    
    while(left) {
        t->next = left;
        t = left;
        left = left->next;
    }
    
    while(right) {
        t->next = right;
        t = right;
        right = right->next;
    }
    
    return h->next;
}

Node *findMiddle(Node* head) {
    Node *s = head, *f = head;
    while(f->next == NULL && f->next->next == NULL) {
        s = s->next;
        f = f->next->next;
    }
    return s;
}

Node* mergeSortLL(Node* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    Node *mid = findMiddle(head);
    Node *left = head;
    Node *right = mid->next;
    mid->next = NULL;
    left = mergeSort(left);
    right = mergeSort(right);
    return merge(left, right);
}