ListNode* deleteDuplicatesFromSortedList2(ListNode* head) {
    if(head == NULL) {
        return NULL;
    }
	ListNode *newHead = NULL,  *tail = NULL;
	ListNode *c = head;
	
	while(c) {
		if(c->next && c->val == c->next->val) {
			ListNode *temp = c->next;
			while(temp && temp->val == c->val) {
				temp = temp->next;
			}
			c = temp;
		}
		else {
			if(tail) {
				tail->next = c;
			}
			else {
				newHead = c;
			}
			tail = c;
			c = c->next;
			tail->next = NULL;
		}
	}
	return newHead;
}