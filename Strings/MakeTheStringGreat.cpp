string makeTheStringGreat(string s) {
    stack<char> stk;
    string res = "";
    for(int i = 0; i < s.size(); i++) {
        if(stk.empty()) {
            stk.push(s[i]);
        }
        else {
            char tp = stk.top();
            bool t = (tp >= 'a' && tp <= 'z');
            bool c = (s[i] >= 'a' && s[i] <= 'z');
            if(!stk.empty() && (tolower(stk.top()) == tolower(s[i])) && t != c) {
                stk.pop();
                t = (tp >= 'a' && tp <= 'z');
                c = (s[i] >= 'a' && s[i] <= 'z');
            }
            else {
                stk.push(s[i]);
            }
        }
    }
    while(!stk.empty()) {
        res += stk.top();
        stk.pop();
    }
    if(res == "") return res;
    int i = 0;
    int j = res.size() - 1;
    while(i < j) {
        swap(res[i++], res[j--]);
    }
    return res;
}