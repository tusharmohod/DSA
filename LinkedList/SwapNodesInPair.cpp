ListNode* swapNodesInPair(ListNode* head) {
    if(head == NULL) {
        return NULL;
    }
    if(head->next == NULL) {
        return head;
    }
    ListNode *i = head, *j = head->next;
    while(i && j) {
        swap(i->val, j->val);
        i = j->next;
        j = (j->next) ? i->next : NULL;
    }
    return head;
}