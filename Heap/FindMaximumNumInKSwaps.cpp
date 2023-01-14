void helper(string &str, int k, string &res, int index) {
    if(k == 0) {
        return;
    }
    char maxchar = str[index];
    for(int i = index + 1; i < str.size(); i++) {
        if(maxchar < str[i]) {
            maxchar = str[i];
        }
    }
    if(maxchar != str[index]) k--;
    for(int i = index; i < str.size(); i++) {
        if(str[i] == maxchar) {
            swap(str[index], str[i]);
            if(res < str) {
                res = str;
            }
            helper(str, k, res, index + 1);
            swap(str[index], str[i]);
        }
    }
}

string findMaximumNumInKSwaps(string str, int k) {
    string res = str;
    helper(str, k, res, 0);
    return res;
}