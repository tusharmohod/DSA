int excelTitleToNumber(string s) {
    int r = 0;
    int n = s.length();
    for(int i = 0; i < n; i++) {
        r = (r * 26 + (s[i] - 'A' + 1));
    }
    return r;
}