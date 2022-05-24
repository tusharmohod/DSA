bool isValidCharacter(char c) {
    return (c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9'); 
}


bool isRightToLeft(char &a, char &b) {
    return (a == '^' && b == '^');
}

string infixToPostfix(string st) {
    stack<char> s;
    string ans = "";
    unordered_map<char, int> mp;
    mp['('] = 0;
    mp['+'] = 1;
    mp['-'] = 1;
    mp['*'] = 2;
    mp['/'] = 2;
    mp['^'] = 3;
    
    for(int i = 0; i < st.size(); i++) {
        if(isValidCharacter(st[i])) {
            ans += st[i];
        }
        else if(s.empty() || st[i] == '(') {
            s.push(st[i]);
        }
        else {
            if(mp[st[i]] > mp[s.top()]) {
                s.push(st[i]);
            }
            else {
                while(!s.empty() && mp[st[i]] <= mp[s.top()]) {
                    char c = s.top();
                    if(isRightToLeft(c, st[i])) {
                        break;
                    }
                    s.pop();
                    if(c == '(') {
                        break;
                    }
                    ans += c;
                }
                if(st[i] != ')') {
                    s.push(st[i]);
                }
            }
        }
    }
    while(!s.empty()) {
        ans += s.top();
        s.pop();
    }
    return ans;
}
