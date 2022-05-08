int countElements(vector<int>& nums) {
    int mx = nums[0];
    int mn = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        mx = max(mx, nums[i]);
        mn = min(mn, nums[i]);
    }
    int count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == mn || nums[i] == mx) {
            continue;
        }
        count++;
    }
    return count;
}