int longestValidParentheses(string s) {
    stack<pair<int, char>> st;
    int res = 0;
    for(int i = 0; i < s.size(); i++) {
        if(!st.empty() && s[i] == ')' && st.top().second == '(') {
            st.pop();
            if(st.empty()) {
                res = max(res, i + 1);
            }
            else {
                res = max(res, i - st.top().first);
            }
        }
        else {
            st.push({i, s[i]});
        }
    }
    return res;
}