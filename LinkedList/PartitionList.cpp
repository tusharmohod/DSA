ListNode* partitionList(ListNode* head, int x) {
    if(head == NULL) {
        return NULL;
    }
    ListNode *h1 = NULL, *h2 = NULL, *t1 = NULL, *t2 = NULL;
    ListNode *temp = head;
    while(temp) {
        if(temp->val < x) {
            if(h1 == NULL) {
                h1 = temp;
            }
            else {
                t1->next = temp;
            }
            t1 = temp;
            temp = temp->next;
            t1->next = NULL;
        }
        else {
            if(h2 == NULL) {
                h2 = temp;
            }
            else {
                t2->next = temp;
            }    
            t2 = temp;
            temp = temp->next;
            t2->next = NULL; 
        }
    }
    
    if(h1 == NULL) {
        return h2;
    }
    
    t1->next = h2;
    return h1;
}