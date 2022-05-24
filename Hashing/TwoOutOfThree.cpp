vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    vector<int> res;
    unordered_set<int> s1(nums1.begin(), nums1.end());
    unordered_set<int> s2(nums2.begin(), nums2.end());
    unordered_set<int> s3(nums3.begin(), nums3.end());
    unordered_map<int, int> mp;
    for(auto e : s1) {
        mp[e]++;
    }
    for(auto e : s2) {
        mp[e]++;
    }
    for(auto e : s3) {
        mp[e]++;
    }
    for(auto e : mp) {
        if(e.second >= 2) {
            res.push_back(e.first);
        }
    }
    return res;
}