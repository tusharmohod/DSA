ListNode* insertionSortList(ListNode* head) {
    if(!head || !head->next) {
        return head;
    }
    
    ListNode *res = head;
    head = head->next;
    ListNode *newNode = head;
    head = head->next;
    newNode->next = NULL;
    res->next = NULL;
    ListNode *prev = NULL;
    while(newNode) {
        ListNode *t = res;
        while(t && newNode->val > t->val) {
            prev = t;
            t = t->next;
        }
        if(t == res) {
            newNode->next = res;
            res = newNode;
        }
        else {
            newNode->next = t;
            prev->next = newNode;
        }
        newNode = head;
        if(head == NULL) {
            break;
        }
        head = head->next;
        newNode->next = NULL;
    }
    return res;
}