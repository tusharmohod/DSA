bool isIsogram(string s) {
    int count[26] = {0};
    int n = s.length();
    for(int i = 0; i < n; i++) {
        if(count[s[i] - 'a'] == 1) {
            return false;
        }
        count[s[i] - 'a'] += 1;
    }
    return true;
}