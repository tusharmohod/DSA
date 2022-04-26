vector<int> findAllAnagramsInAString(string s, string p) {
    vector<int> res;
    vector<int> shash(26, 0);
    vector<int> phash(26, 0);
    int n = s.length();
    int w = p.length();
    if(n < w) {
        return res;
    }
    int l = 0, r = 0;
    while(r < w) {
        shash[s[r] - 'a'] += 1;
        phash[p[r] - 'a'] += 1;
        r += 1;
    }
    r -= 1;
    while(r < n) {
        if(shash == phash) {
            res.push_back(l);
        }
        r += 1;
        if(r < n) {
            shash[s[r] - 'a'] += 1;
        }
        shash[s[l] - 'a'] -= 1;
        l += 1;
    }
    return res;
}