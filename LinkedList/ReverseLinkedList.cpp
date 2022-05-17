ListNode* reverseLinkedList(ListNode* head) {
    ListNode *p = NULL;
    ListNode *c = head;
    ListNode *n = NULL;
    while(c) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}