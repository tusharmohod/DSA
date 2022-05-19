class MinStack {
    public:
    stack<int> st, m;
    
    MinStack() {
    
    }
    
    void push(int val) {
        m.push(m.empty() ? val : min(val, m.top()));
        st.push(val);
    }
    
    void pop() {
        st.pop();
        m.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return m.top();
    }
};