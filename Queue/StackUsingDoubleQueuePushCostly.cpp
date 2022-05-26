class stackUsingDoubleQueuePushCostly {
    public:
    queue<int> q1, q2;

    stackUsingDoubleQueuePushCostly() {
        
    }

    void push(int x) {
        while(!q1.empty()) {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()) {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop() {
        if(q1.empty()) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        int ret = q1.front();
        q1.pop();
        return ret;
    }
};