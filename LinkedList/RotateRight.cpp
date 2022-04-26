ListNode* rotateRight(ListNode* head, int k) {
    int n = 0;
    ListNode *temp = head;
    if(head == NULL) {
        return NULL;
    } 
    while(temp) {
        temp = temp->next;
        n += 1;
    }
    if(n == 1 || k == 0) {
        return head;
    }
    int c = n - (k % n);
    int d = 0;
    temp = head;
    while(temp) {
        d += 1;
        if(d == c) {
            break;
        }
        temp = temp->next;
    }
    ListNode *t1 = temp->next;
    temp->next = NULL;
    ListNode* newHead = t1;
    temp = t1;
    if(temp == NULL) {
        return head;
    }
    while(temp->next) {
        temp = temp->next;
    }
    temp->next = head;
    return newHead;
}