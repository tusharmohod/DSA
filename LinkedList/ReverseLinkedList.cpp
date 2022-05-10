ListNode* reverseLinkedList(ListNode* head) {
    if(!head || !head->next) {
        return head;
    }
    ListNode *p = NULL;
    ListNode *c = head;
    ListNode *n = c->next;
    while(c) {
        c->next = p;
        p = c;
        c = n;
        n = (n == NULL) ? NULL: n->next;
    }
    return p;
}