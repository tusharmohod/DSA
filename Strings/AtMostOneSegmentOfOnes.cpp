bool atMostOneSegmentOfOnes(string s) {
    int n = s.size();
    bool onecompleted = false;
    for(int i = 1; i < n; i++) {
        if(!onecompleted && s[i] == '0') {
            onecompleted = true;
        }
        else if(onecompleted && s[i] == '1') {
            return false;
        }
    }
    return true;
}