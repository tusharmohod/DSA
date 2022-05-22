bool isMatching(char a, char b) {
    return (a == '(' && b == ')' || a == '[' && b == ']' || a == '{' && b == '}');
}

bool balancedParanthesis(string s) {
    stack<char> stk;
    for(char c : s) {
        if(c == '(' || c == '[' || c == '{') {
            stk.push(c);
        }
        else {
            if(stk.empty()) {
                return false;
            }
            if(isMatching(stk.top(), c)) {
                stk.pop();
            }
            else {
                return false;
            }
        }
    }
    return st.empty();
}