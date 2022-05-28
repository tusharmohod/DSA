int degreeOfAnArray(vector<int>& nums) {
    unordered_map<int, vector<int>> mp;
    int mx = 0;
    for(int i = 0; i < nums.size(); i++) {
        mp[nums[i]].push_back(i);
        mx = max(mx, (int)mp[nums[i]].size());
    }
    int res = nums.size();
    for(auto e : mp) {
        if(e.second.size() == mx) {
            res = min(res, e.second[mx-1] - e.second[0]);
        }
    }
    return res+1;
}