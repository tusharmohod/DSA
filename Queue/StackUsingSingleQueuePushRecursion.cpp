class stackUsingSingleQueuePushRecursion {
    public:
    queue<int> q;
    
    stackUsingSingleQueuePushRecursion() {
        
    }
    
    void pushelement(int n) {
        if(n == 0 || n == 1) {
            return;
        }
        int t = q.front();
        q.pop();
        q.push(t);
        n = n - 1;
        pushelement(n);
    }
    
    void push(int x) {
        q.push(x);
        pushelement(s.size());
    }
    
    int pop() {
        if(q.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int ret = q.front();
        q.pop();
        return ret;
    }
};