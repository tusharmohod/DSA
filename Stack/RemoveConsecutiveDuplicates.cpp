string removeConsecutiveDuplicates(string st) {
    stack<char> s;
    string res = "";
    for(int i = 0; i < st.size(); i++) {
        if(s.empty()) {
            s.push(st[i]);
            res += st[i];
        }
        else {
            if(s.top() != st[i]) {
               s.push(st[i]);
               res += st[i];
            }
        }
    }
    return res;
}