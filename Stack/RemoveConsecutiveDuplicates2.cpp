void reverse(string &st) {
    int i = 0, j = st.size() - 1;
    while(i < j) {
        char c = st[i];
        st[i] = st[j];
        st[j] = c;
        i++;
        j--;
    }
}

string removeConsecutiveDuplicates2(string str) {
    stack<int> s;
    string res = "";
    for(int i = 0; i < str.size(); i++) {
        if(!s.empty() && s.top() == str[i]) {
            s.pop();
        }
        else {
            s.push(str[i]);
        }
    }
    while(!s.empty()) {
        res += s.top();
        s.pop();
    }
    reverse(res);
    return res;
}