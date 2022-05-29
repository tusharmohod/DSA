class stackWithIncrementOperation {
    public:
    int size;
    stack<int> s;
    stackWithIncrementOperation(int maxSize) {
        size = maxSize;
    }
    
    void push(int x) {
        if(s.size() == size) {
            return;
        }
        s.push(x);
    }
    
    int pop() {
        if(s.empty()) {
            return -1;
        }
        int ret = s.top();
        s.pop();
        return ret;
    }
    
    void increment(int k, int val) {
        stack<int> s1;
        int rem = s.size() - k;
        if(rem >= 0) {
            for(int i = 0; i < rem; i++) {
                s1.push(s.top());
                s.pop();
            }
        }
        while(!s.empty()) {
            s1.push(s.top() + val);
            s.pop();
        }
        while(!s1.empty()) {
            s.push(s1.top());
            s1.pop();
        }
    }
};