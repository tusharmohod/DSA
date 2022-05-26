bool buddyStrings(string s, string goal) {
    int n1 = s.size(), n2 = goal.size();
    if(n1 != n2) {
        return false;
    }
    unordered_map<char, int> mp;
    int i1 = -1, i2 = -1;
    int count = 0;
    for(int i = 0; i < n1; i++) {
        if(s[i] != goal[i]) {
            if(i1 == -1) i1 = i;
            else if(i2 == -1) i2 = i;
            else return false;
        }
        else {
            mp[s[i]]++;
            count = max(count, mp[s[i]]);
        }
    }
    if(i1 != -1 && i2 != -1) {
        swap(s[i1], s[i2]);
        return s == goal;
    }
    if(i1 != -1 && i2 == -1) {
        return false;
    }
    return (count >= 2);
}