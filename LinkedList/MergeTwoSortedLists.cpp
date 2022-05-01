ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(list1 == NULL && list2 == NULL) {
        return NULL;
    }
    else if(list1 == NULL && list2 != NULL) {
        return list2;
    }
    else if(list1 != NULL && list2 == NULL) {
        return list1;
    }
    
    ListNode *i = list1;
    ListNode *j = list2;
    ListNode *head = NULL, *tail = NULL;
    
    while(i && j) {
        if(i->val <= j ->val) {
            if(head == NULL) {
                head = i;
                tail = i;
                i = i->next;
            }
            else {
                tail->next = i;
                tail = tail->next;
                i = i->next;
                tail->next = NULL;
            }
        }
        else {
            if(head == NULL) {
                head = j;
                tail = j;
                j = j->next;
                tail->next = NULL;
            }
            else {
                tail->next = j;
                tail = tail->next;
                j = j->next;
                tail->next = NULL;
            }
        }
    }
    while(i) {
        tail->next = i;
        tail = tail->next;
        i = i->next;
        tail->next = NULL;
    }   
    
    while(j) {
        tail->next = j;
        tail = tail->next;
        j = j->next;
        tail->next = NULL;
    }
    tail->next = NULL;
    return head;
}