char maximumOccuringCharacter(string str) {
    vector<int> count(26, 0);
    int n = str.length();
    int maxlen = 0;
    char res;
    for(int i = 0; i < n; i++) {
        count[str[i] - 'a'] += 1;
    }
    for(int i = 0; i < 26; i++) {
        int num = count[i]; 
        if(num > maxlen) {
            maxlen = num;
            res = i + 'a';
        }
    }
    return res;
}