vector<int> intersectionBetweenKArrays(vector<vector<int>>& nums) {
    map<int, int> mp;
    for(int i = 0; i < nums.size(); i++) {
        for(int j = 0; j < nums[i].size(); j++) {
            mp[nums[i][j]]++;
        }
    }
    int l = nums.size();
    vector<int> v;
    for(auto e : mp) {
        if(e.second == l) {
            v.push_back(e.first);
        }
    }
    return v;
}