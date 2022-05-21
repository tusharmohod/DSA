ListNode* reverseLLEvenSizeGroup(ListNode* head) {
    if(!head || !head->next) return head;
    ListNode *c = head, *fp = head, *st, *p, *n;
    int l = 0;
    while(c) {
        l = l + 1;
        c = c->next;
    }
    l = l - 1;
    int cv = 2, k;
    c = head->next;
    while(c && l > 0) {
        if(cv > l) {
            k = l;
            l = 0;
        }
        else {
            k = cv;
            l = l - cv;
        }
        if(k & 1) {
            st = c;
            while(k--) {
                p = c;
                c = c->next;
            }
            fp->next = st;
            fp = p;
        }
        else {
            st = c; p = NULL; n = NULL;
            while(k--){
                n = c->next;
                c->next = p;
                p = c;
                c = n;
            }
            fp->next = p;
            fp = st;
        }
        cv = cv + 1;
    }
    return head;
}