ListNode* deleteDuplicatesFromSortedList(ListNode* head) {
    if(head == NULL) {
        return NULL;
    }
    ListNode *temp = head;
    ListNode *h = NULL, *t = NULL;
    while(temp) {
        if(h == NULL) {
            h = temp;
            t = temp;
            temp = temp->next;
            t->next = NULL;
        }
        else {
            if(t->val == temp->val) {
                temp = temp->next;
            }
            else {
                t->next = temp;
                t = t->next;
                temp = temp->next;
                t->next = NULL;
            }
        }
    }
    return h;
}