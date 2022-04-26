void reverse(string &st, int s, int e) {
    while(s < e) {
        swap(st[s], st[e]);
        s += 1;
        e -= 1;
    }
}

string reverseWordsInAString(string s) {
    int n = s.length();
    int left = 0;
    reverse(s, left, n - 1);
    for(int right = 0; right < n; right++) {
        if(s[right] == ' ') {
            reverse(s, left, right - 1);
            left = right + 1;
        }
    }
    reverse(s, left, n - 1);
    return s;
}