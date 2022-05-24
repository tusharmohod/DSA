vector<vector<int>> findDifferenceBetweenTwoArrays(vector<int>& nums1, vector<int>& nums2) {
    vector<vector<int>> res;
    unordered_set<int> mp1, mp2;
    for(int i = 0; i < nums1.size(); i++) {
        mp1.insert(nums1[i]);
    }
    for(int i = 0; i < nums2.size(); i++) {
        mp2.insert(nums2[i]);
    }
    for(int i = 0; i < nums2.size(); i++) {
        int n = nums2[i];
        if(mp1.find(n) != mp1.end()) {
            mp1.erase(n);
            mp2.erase(n);
        }
    }
    vector<int> r;
    for(auto e : mp1) {
        r.push_back(e);
    }
    res.push_back(r);
    r.clear();
    for(auto e : mp2) {
        r.push_back(e);
    }
    res.push_back(r);
    return res;
}