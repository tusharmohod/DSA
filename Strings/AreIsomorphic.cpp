bool areIsomorphic(string str1, string str2){
    if(str1.length() != str2.length()) {
        return false;
    }
    int m1[26], m2[26];
    fill(m1, m1 + 26, -1);
    fill(m2, m2 + 26, -1);
    int n = str1.length();
    for(int i = 0; i < n; i++) {
        if(m1[str1[i] - 'a'] == -1) {
            m1[str1[i] - 'a'] = str2[i] - 'a';
        }
        else if(m1[str1[i] - 'a'] != (str2[i] - 'a')) {
            return false;
        }
    }
    for(int i = 0; i < n; i++) {
        if(m2[str2[i] - 'a'] == -1) {
            m2[str2[i] - 'a'] = str1[i] - 'a';
        }
        else if(m2[str2[i] - 'a'] != (str1[i] - 'a')) {
            return false;
        }
    }
    return true;
}