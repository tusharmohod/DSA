static bool mycomp(pair<char, int> i1, pair<char, int> i2) {
    return (i1.second > i2.second);
}

string sortByCharacterFrequency(string s) {
    unordered_map<char, int> mp; 
    string st = "";
    for(int i = 0; i < s.size(); i++) {
        mp[s[i]]++;
    }
    vector<pair<char, int>> v(mp.size());
    int i = 0;
    for(auto e : mp) {
        v[i++] = pair<char, int>({e.first, e.second});
    }
    sort(v.begin(), v.end(), mycomp);
    for(int i = 0; i < v.size(); i++) {
        while(v[i].second--) {
            st += v[i].first;
        }
    }
    return st;
}