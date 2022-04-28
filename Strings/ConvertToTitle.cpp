string excelConvertToTitle(int n) {
    string s = "";
    char c;
    while(n > 0) {
        n -= 1;
        int r = n % 26;
        c = char('A' + r);
        s = c + s;
        n /= 26; 
    }
    return s;
}