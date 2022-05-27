queue<int> reverseFirstKElementsQueue(queue<int> qu, int k) {
    stack<int> s;
    for(int i = 0; i < k; i++) {
        s.push(qu.front());
        qu.pop();
        if(qu.empty()) {
            break;
        }
    }
    while(!s.empty()) {
        qu.push(s.top());
        s.pop();
    }
    int rem = qu.size() - k;
    if(rem > 0) {
        while(rem--) {
            qu.push(qu.front());
            qu.pop();
        }
    } 
    return qu;
}