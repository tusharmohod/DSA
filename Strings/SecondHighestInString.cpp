int secondHighestInString(string s) {
    int m1 = -1, m2 = -1;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            int num = s[i] - '0';
            if(num > m1) {
                m2 = m1;
                m1 = num;
            }
            else if(num != m1 && num > m2) {
                m2 = num;
            }
        }
    }
    return m2;
}