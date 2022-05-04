bool longerContiguousSegmentsOfOnesThanZeros(string s) {
    int one = 0;
    int c1 = 1;
    int zero = 0;
    int c0 = 1;
    if(s.size() == 1 && s[0] == '1') {
        return true;
    }
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == s[i - 1]) {
            (s[i] == '0') ? c0++ : c1++;
        }
        else {
            one = max(one, c1);
            zero = max(zero, c0);
            (s[i] == '1') ? c1 = 1 : c0 = 1; 
        }
    }
    one = max(one, c1);
    zero = max(zero, c0);
    return one > zero;
}