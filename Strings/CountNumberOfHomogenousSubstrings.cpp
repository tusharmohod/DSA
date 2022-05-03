int countNumberOfHomogenousSubstrings(string s) {
    long res = 0;
    long c = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            c++;
        }
        else {
            res = (res + ((c * (c + 1)) >> 1)) % mod;
            c = 1;
        }
    }
    res = (res + ((c * (c + 1)) >> 1)) % mod;
    return res;
}