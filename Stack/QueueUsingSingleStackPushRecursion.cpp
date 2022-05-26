class queueUsingSingleStackPushRecursion {
    public:
    stack<int> s;
    
    queueUsingSingleStackPopRecursion() {
        
    }
    
    void pushelement(int x) {
        if(s.empty()) {
            s.push(x);
            return;
        }
        int t = s.top();
        s.pop();
        pushelement(s, x);
        s.push(t);
    }

    void push(int x) {
        pushelement(x);
    }
    
    int pop() {
        if(s.empty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int ret = s.top();
        s.pop();
        return ret;
    }
};