class stackUsingDoubleQueuePopCostly {
    public:
    queue<int> q1, q2;
    stackUsingDoubleQueuePopCostly() {
        
    }

    void push(int x) {
        q1.push(x);
    }

    int pop() {
        if(q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        while(q1.size() > 1) {
            q2.push(q1.front());
            q1.pop();
        }
        int ret = q2.front();
        q1.pop();
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
        return ret;
    }
};