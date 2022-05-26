class stackUsingSingleQueue {
    public:
    queue<int> q;

    stackUsingSingleQueue() {
        
    }

    void push(int x) {
        q.push(x);
        for(int i = 0; i < q.size() - 1; i++) {
            q.push(pop());
        }
    }

    int pop() {
        int x = q.front();
        q.pop();
        return x;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};