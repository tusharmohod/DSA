ListNode* removeNthNodeFromEnd(ListNode* head, int n) {
    ListNode *temp = head;
    int len = 0;
    while(temp) {
        temp = temp->next;
        len += 1;
    }
    temp = head;
    int c = 0;
    int d = len - n;
    ListNode *temp1;
    if(len == 1) {
        head = head->next;
        return head;
    }
    if(d == 0) {
        temp1 = head;
        head = head->next;
        delete(temp1);
        return head;
    }
    while(temp) {
        if(c + 1 == d) {
            break;
        }
        temp = temp->next;
        c++;
    }
    temp1 = temp->next;
    temp->next = temp1->next;
    delete(temp1);
    return head;
}