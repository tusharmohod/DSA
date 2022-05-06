string longestPalindromeSubstring(string s) {
    string res = "";
    int left = 0, right = 0;
    for(int i = 0; i < s.size(); i++) {
        int l = i, r = i;
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            if((right - left + 1) < (r - l + 1)) {
                left = l;
                right = r;
            }
            l--;
            r++;
        }
        l = i, r = i + 1;
        while(l >= 0 && r < s.size() && s[l] == s[r]) {
            if((right - left + 1) < (r - l + 1)) {
                left = l;
                right = r;
            }
            l--;
            r++;
        }
    }
    for(int i = left; i <= right; i++) {
        res += s[i];
    }
    return res;
}