class stackUsingSingleQueuePopRecursion {
    public:
    queue<int> q;
    
    stackUsingSingleQueuePopRecursion() {
        
    }
    
    int popelement(int n) {
        if(n == 1) {
            int r = q.front();
            q.pop();
            return r;
        }
        int t = q.front();
        q.pop();
        q.push(t);
        n = n - 1;
        return popelement(n);
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        if(q.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int ret = popelement(q.size());
        return ret;
    }
};