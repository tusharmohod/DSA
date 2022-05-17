vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> res;
    unordered_map<int, int> map;
    
    for(int i = 0; i < nums.size(); i++) {
        int comp = target - nums[i];
        auto it = map.find(comp);
        if(it == map.end()) {
            map[nums[i]] = i;
        }
        else {
            res.push_back(it->second);
            res.push_back(i);
        }
    }
    return res;
}