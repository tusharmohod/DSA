ListNode* mergeKLists(vector<ListNode*>& lists) {
    ListNode *res = new ListNode();
    ListNode *h = NULL, *t = NULL;
    priority_queue<int, vector<int>, greater<int>> pq;
    
    for(auto &l : lists) {
        ListNode *temp = l;
        while(temp) {
            pq.push(temp->val);
            temp = temp->next;
        }
    }
    
    while(!pq.empty()) {
        ListNode *newNode = new ListNode(pq.top());
        if(h == NULL) {
            h = newNode;
        }
        else {
            t->next = newNode;
        }
        t = newNode;
        t->next = NULL;
        pq.pop();
    }
    
    return h;
}