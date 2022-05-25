void deleteMiddle(stack<int>&s, int sizeOfStack) {
    int d = sizeOfStack >> 1;
    stack<int> t;
    while(d--) {
        t.push(s.top());
        s.pop();
    }
    s.pop();
    while(!t.empty()) {
        s.push(t.top());
        t.pop();
    }
}