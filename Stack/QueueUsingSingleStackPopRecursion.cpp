class queueUsingSingleStackPopRecursion {
    public:
    stack<int> s;
    
    queueUsingSingleStackPopRecursion() {
        
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int popelement() {
        if(s.size() == 1) {
            int r = s.top();
            s.pop();
            return r;
        }
        int t = s.top();
        s.pop();
        int res = popelement();
        s.push(t);
        return res;
    }
    
    int pop() {
        if(s.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ret = popelement();
        return ret;
    }
};