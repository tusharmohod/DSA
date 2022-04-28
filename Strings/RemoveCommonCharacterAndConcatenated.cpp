string removeCommonCharacterAndConcatenated(string s1, string s2) {
    vector<int> c1(256, 0);
    vector<int> c2(256, 0);
    int n = s1.length();
    int m = s2.length();
    for(int i = 0; i < n; i++) {
        c1[s1[i]] += 1;
    }
    for(int i = 0; i < m; i++) {
        c2[s2[i]] += 1;
    }
    string r = "";
    for(int i = 0; i < n; i++) {
        if(c2[s1[i]] == 0) {
            r = r + s1[i];
        }
    }
    for(int i = 0; i < m; i++) {
        if(c1[s2[i]] == 0) {
            r = r + s2[i];
        }
    }
    return (r == "") ? "-1" : r;
}