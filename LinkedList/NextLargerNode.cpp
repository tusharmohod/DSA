ListNode *reverse(ListNode *head) {
    ListNode *p = NULL, *c = head, *n = NULL;
    while(c) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}

vector<int> nextLargerNode(ListNode* head) {
    head = reverse(head);
    stack<int> st;
    vector<int> res;
    ListNode *curr = head;
    while(curr) {
        if(st.empty()) {
            st.push(curr->val);
            res.push_back(0);
        }
        else {
            while(!st.empty() && curr->val >= st.top()) {
                st.pop();
            }
            if(!st.empty()) {
                res.push_back(st.top());
            }
            else { 
                res.push_back(0);
            }
            st.push(curr->val);
        }
        curr = curr->next;
    }
    for(int i =0; i < res.size() / 2; i++) {
        int t = res[i];
        res[i] = res[res.size() - 1 - i];
        res[res.size() - 1 - i] = t;
    }
    return res;
}