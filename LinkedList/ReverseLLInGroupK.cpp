Node* reverseLLInGroupK(Node* head, int k) {
	if(head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node *c = head;
    Node *prevFirst = NULL;
    bool isFirstPass = true;
    
    while(c) {
        Node *start = c;
        Node *p = NULL, *n = NULL;
        int count = 0;
        while(c && count < k) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;
            count++;
        }
        if(isFirstPass) {
            head = p;
            isFirstPass = false;
        }
        else {
            prevFirst->next = p;
        }
        prevFirst = start;
    }
    
    return head;
}