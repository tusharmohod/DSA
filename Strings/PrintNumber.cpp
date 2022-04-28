string printNumber(string s, int n) {
    int keypad[26];
    for(int i = 0; i < 15; i++) {
        keypad[i] = ((i + 3) / 3) + 1;
    }
    for(int i = 15; i < 19; i++) {
        keypad[i] = 7;
    }
    for(int i = 19; i < 22; i++) {
        keypad[i] = 8;
    }
    for(int i = 22; i < 26; i++) {
        keypad[i] = 9;
    }
    string r = "";
    for(int i = 0; i < n; i++) {
        int num = keypad[s[i] - 'a'];
        r = r + to_string(num);
    }
    return r;
}