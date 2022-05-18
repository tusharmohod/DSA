ListNode* deleteMiddleLL(ListNode* head) {
    if(!head || !head->next) 
    	return NULL;

    ListNode *slow = head, *fast = head, *prev = NULL;
    
    while(fast && fast->next) {
        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *t = prev->next;
    prev->next = t->next;
    delete(t);
    
    return head;
}