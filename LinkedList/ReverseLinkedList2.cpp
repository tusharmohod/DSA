ListNode* reverseLinkedList2(ListNode* head, int left, int right) {
    if(!head || !head->next || left == right) {
        return head;
    }
    ListNode *h = NULL;
    ListNode *c = head;
    for(int i = 1; i < left; i++) {
        h = c;
        c = c->next;
    }
    ListNode *t = c;
    ListNode *p = NULL;
    ListNode *n = c->next;
    for(int i = left; i <= right; i++) {
        c->next = p;
        p = c;
        c = n;
        n = (n == NULL) ? NULL : n->next;
    }
    if(h == NULL) {
        h = p;
    }
    else {
        h->next = p;
    }
    t->next = c;
    return (left == 1) ? h : head;
}