bool checkIfOneStringSwapCanMakeStringsEqual(string s1, string s2) {
    int n1 = s1.size(), n2 = s2.size();
    if(n1 != n2) {
        return false;
    }
    if(s1 == s2) {
        return true;
    }
    int diff = 0;
    int i1 = -1, i2 = -1;
    for(int i = 0; i < n1; i++) {
        if(s1[i] != s2[i]) {
            if(diff == 0) {
                i1 = i;
                i2 = i;
                diff++;
            }
            else {
                if(s1[i] == s2[i1] && s2[i] == s1[i2]) {
                    swap(s1[i], s1[i2]);
                    return (s1 == s2);
                }
            }
        }
    }
    return false;
}