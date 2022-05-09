ListNode* hasCycle2(ListNode *head) {
    if(head == NULL || head->next == NULL) {
        return NULL;
    }
    ListNode *slow = head;
    ListNode *fast = head;
    bool f = false;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            f = true;
            break;
        }
    }
    if(!f) {return NULL;}
    slow = head;
    while(slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}