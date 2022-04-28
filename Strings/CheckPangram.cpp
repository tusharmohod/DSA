bool checkPangram(string &str) {
    vector<int> count(26, 0);
    int n = str.length();
    for(int i = 0; i < n; i++) {
        count[tolower(str[i]) - 'a'] += 1;
    }
    for(int i = 0; i < 26; i++) {
        if(count[i] == 0) {
            return false;
        }
    }
    return true;
}