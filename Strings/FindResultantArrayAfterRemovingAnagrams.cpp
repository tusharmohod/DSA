bool isMatching(string s1, string s2) {
    if(s1.size() != s2.size()) return false;
    int count[26] = {0};
    for(int i = 0; i < s1.size(); i++) {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }
    for(int i = 0; i < 26; i++) {
        if(count[i] != 0) {
            return false;
        } 
    }
    return true;
}

vector<string> FindResultantArrayAfterRemovingAnagrams(vector<string>& words) {
    vector<string> v;
    string p;
    v.push_back(words[0]);
    p = words[0];
    
    for(int i = 1; i < words.size(); i++) {
        if(isMatching(p, words[i]) == false) {
            v.push_back(words[i]);
            p = words[i];
        }
    }
    return v;
}