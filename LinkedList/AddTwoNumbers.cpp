ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int carry = 0;
    int res = 0;
    int rem = 0;
    ListNode *head = NULL;
    ListNode *tail = NULL;
    ListNode *t1 = l1;
    ListNode *t2 = l2;
    while(t1 || t2) {
        int a = (t1 == NULL) ? 0 : t1->val;
        int b = (t2 == NULL) ? 0 : t2->val;
        int r = a + b + carry;
        rem = r % 10;
        carry = r / 10;
        
        if(head == NULL) {
            head = new ListNode(rem);
            tail = head;
        }
        else {
            tail->next = new ListNode(rem);
            tail = tail->next;
        }
        
        if(t1) {
            t1 = t1->next;
        }
        if(t2) {
            t2 = t2->next;
        }
    }
    if(carry != 0) {
        tail->next = new ListNode(carry);
        tail = tail->next;
    }
    return head;
}