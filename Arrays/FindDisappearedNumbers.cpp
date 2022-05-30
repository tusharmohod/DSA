vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> res;
    int mod = nums.size() + 1;
    for(int i = 0; i < nums.size(); i++) {
        int pos = (nums[i] - 1) % mod;
        nums[pos] = nums[pos] + mod;
    }
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] / mod == 0) {
            res.push_back(i + 1);
        }
    }
    return res;
}