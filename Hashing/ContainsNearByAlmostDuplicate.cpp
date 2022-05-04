bool containsNearByAlmostDuplicate(vector<int>& nums, int k, int tt) {
    multiset<long> ms;
    long t = tt;
    for(int i = 0; i < nums.size(); i++) {
        if(i > k) {
            ms.erase(nums[i - k - 1]);
        }
        auto it = ms.lower_bound(nums[i] - t);
        long diff = *it - nums[i];
        
        if(it != ms.end() && diff <= t) {
            return true;
        }
        ms.insert(nums[i]);
    }
    return false;
}