string smallestWindowContainingAllCharactersInPattern (string s, string p) {
    int n = s.size();
    int m = p.size();
    
    if(m > n) {
        return "-1";
    }
    
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    
    for(int i = 0; i < m; i++) {
        mp2[p[i]] += 1;
    }
    
    int i = 0;
    int j = 0;
    int l = 0;
    int r = 0;
    int curr = 0;
    int maxCount = m;
    int res = INT_MAX;
    
    string ans = "";
    
    while(true) {
        bool f1 = false;
        bool f2 = false;
        while(i < n && curr < maxCount) {
            mp1[s[i]] += 1;
            if(mp1[s[i]] <= mp2[s[i]]) {
                curr += 1;
            }
            i += 1;
            f1 = true;
        }
        while(j < i  && curr == maxCount) {
            if(res > (i - j + 1)) {
                l = j;
                r = i;
                res = r - l + 1;
            }
            mp1[s[j]] -= 1;
            if(mp1[s[j]] < mp2[s[j]]) {
                curr -= 1;
            }
            j += 1;
            f2 = true;
        }
        
        if(f1 == false && f2 == false) {
            break;
        }
    }
    return (res == INT_MAX) ? "-1" : s.substr(l, r - l);
}