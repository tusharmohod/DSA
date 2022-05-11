vector<string> divideString(string s, int k, char fill) {
    int n = ceil(s.size() / (k * 1.0));
    vector<string> res(n);
    string st = "";
    int i = 0, j = 0, c = 0;
    while(j < s.size()) {
        if(c == k - 1) {
            st += s[j];
            res[i++] = st;
            c = 0;
            st = "";
        }
        else {
            st += s[j];
            c++;
        }
        j++;
    }
    if(c > 0) {
        while(c < k) {
            st += fill;
            c++;
        }
        res[i] = st;
    }
    return res;
}