ListNode* removeElementsLL(ListNode* head, int val) {
    ListNode *curr = head, *t = NULL;
    while(curr) {
        if(curr->val == val && curr == head) {
            t = head;
            head = head->next;
            delete(t);
            curr = head;
        }
        else if(curr->next && curr->next->val == val) {
            t = curr->next;
            curr->next = t->next;
            delete(t);
        }
        else {
            curr = curr->next;
        }
    }
    return head;
}