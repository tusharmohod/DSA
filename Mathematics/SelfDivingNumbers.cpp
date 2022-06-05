vector<int> selfDividingNumbers(int left, int right) {
    vector<int> res;
    for(int i = left; i <= right; i++) {
        string s = to_string(i);
        int j;
        for(j = 0; j < s.size(); j++) {
            if(s[j] == '0' || (i % (s[j] - '0') != 0)) {
                break;
            }
        }
        if(j == s.size()) {
            res.push_back(i);
        }
    }
    return res;
}