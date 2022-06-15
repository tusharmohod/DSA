ListNode* oddEvenList(ListNode* head) {
    if(head == NULL || head->next == NULL) {
        return head;
    }
    ListNode *curr = head;
    ListNode *nh = NULL;
    ListNode *nt = NULL;
    ListNode *prev = NULL;
    while(curr && curr->next) {
        if(nh == NULL) {
            nh = curr->next;
            nt = curr->next;
        }
        else {
            nt->next = curr->next;
            nt = nt->next;
        }
        if(curr->next->next == NULL) {
            prev = curr;
        }
        curr->next = curr->next->next;
        curr = curr->next;
    }
    if(prev) {
        prev->next = nh;
    }
    else {
        curr->next = nh;
    }
    nt->next = NULL;
    return head;
}