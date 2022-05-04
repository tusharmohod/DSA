void reverse(string &s, int i, int j) {
    while(i < j) {
        swap(s[i++], s[j--]);
    }
}

string reverseString2(string s, int k) {
    int i = 0;
    while(i < s.size()) {
        if((i + k) > s.size()) {
            reverse(s, i, s.size() - 1);    
        }
        else {
            reverse(s, i, i + k - 1);
        }
        i = i + (2 * k);
    }
    return s;
}