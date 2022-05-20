bool isPalindrome(ListNode* head) {
    if(!head->next) return true;
    ListNode *slow = head, *fast = head;
    while(fast->next && fast->next->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    ListNode *p = NULL, *c = slow->next, *n = NULL;
    slow->next = NULL;
    slow = head;
    while(c) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    while(slow && p) {
        if(slow->val != p->val) {
            return false;
        }
        slow = slow->next;
        p = p->next;
    }
    return true;
}