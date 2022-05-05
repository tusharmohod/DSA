bool NumbersInAscendingOrder(string s) {
    int last = 0;
    int r = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            r = (r * 10) + (s[i] - '0');
        }
        else if(r > 0) {
            if(r <= last) {
                return false;
            }
            last = r;
            r = 0;
        }
    }
    if(r > 0) {
        if(r <= last) {
            return false;
        }
    }
    return true;
}