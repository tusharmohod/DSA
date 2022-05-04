public:
bool isValid(char c) {
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

string reverseOnlyLetters(string &s) {
    int l = 0, r = s.size() - 1;
    while(l < r) {
        if(isValid(s[l])) {
            if(isValid(s[r])) {
                swap(s[l++], s[r--]);
            }
            else {
                r--;
            }
        }
        else {
            l++;
        }
    }
    return s;
}