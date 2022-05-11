ListNode* intersectionOfTwoLinkedList(ListNode *headA, ListNode *headB) {
    int m = 0;
    int n = 0;
    ListNode *t1 = headA;
    ListNode *t2 = headB;
    while(t1) {
        m++;
        t1 = t1->next;
    }
    while(t2) {
        n++;
        t2 = t2->next;
    }
    t1 = headA;
    t2 = headB;
    while(n > 0 && m > 0) {
        if(n > m) {
            t2 = t2->next;
            n--;
        }
        else if(n < m) {
            t1 = t1->next;
            m--;
        }
        else {
            if(t1 == t2 && t1->val == t2->val) {
                return t1;
            }
            t1 = t1->next;
            t2 = t2->next;
            n--;
            m--;
        }
    }
    return NULL;
}