void reorderList(ListNode* head) {
    if(!head || !head->next) return;
    int len = 0;
    ListNode *c = head;
    while(c) {
        len++;
        c = c->next;
    }
    ListNode *t1 = NULL, *h2 = NULL;
    int mid = len >> 1;
    mid += (len & 1) ? 1  : 0;
    c = head;
    for(int i = 0; i < mid; i++) {
        t1 = c;
        c = c->next;
    }
    h2 = t1->next;
    t1->next = NULL;
    
    ListNode *p = NULL, *n = NULL;
    c = h2;
    while(c) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    
    c = head;
    ListNode *ne = p;
    while(ne) {
        p = p->next;
        ne->next = c->next;
        c->next = ne;
        c = c->next->next;
        ne = p;
    }
}