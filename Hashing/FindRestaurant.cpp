vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
    vector<string> res;
    unordered_map<string, int> mp;
    int n = list1.size() + list2.size();
    for(int i = 0; i < list1.size(); i++) {
        mp[list1[i]] = i;
    }
    int mn = n << 1;
    for(int i = 0; i < list2.size(); i++) {
        if(mp.find(list2[i]) != mp.end()) {
            mp[list2[i]] += n;
            mn = min(mn, mp[list2[i]] + i);
        }
        mp[list2[i]] += i;
    }
    for(auto e : mp) {
        if(e.second == mn) {
            res.push_back(e.first);
        }
    }
    return res;
}