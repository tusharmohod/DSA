string removeAdjacentDuplicates(string s) {
    stack<char> stk;
    bool f = false;
    for(int i = 0; i < s.length(); i++) {
        if(stk.empty()) {
            stk.push(s[i]);
        }
        else {
            if(stk.top() == s[i]) {
                stk.pop();
            }
            else {
                stk.push(s[i]);
            }
        }
    }
    string st = "";
    while(!stk.empty()) {
        st += stk.top();
        stk.pop();
    }
    reverse(st.begin(), st.end());
    return st;
}