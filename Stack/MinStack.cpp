class MinStack {
    public:
    stack<int> st, m;
    
    MinStack() {
    
    }
    
    void push(int val) {
        st.push(val);
        if(val <= m.top()) {
            m.push(val);
        }
    }
    
    void pop() {
        if(st.top() == m.top()) {
            m.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m.top();
    }
};