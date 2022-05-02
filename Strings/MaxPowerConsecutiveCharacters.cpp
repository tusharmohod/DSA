int maxPowerConsecutiveCharacters(string s) {
    int res = 1;
    int cres = 1;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            cres++;
        }
        else {
            res = max(res, cres);
            cres = 1;
        }
    }
    res = max(res, cres);
    return res;
}