int minOperationsToReduceXToZero(vector<int>& nums, int x) {
    int target = 0;
    for(int i = 0; i < nums.size(); i++) {
        target += nums[i];
    }
    target -= x;
    if(target < 0) return -1;
    if(target == 0) return nums.size();
    int i = 0, j = 0;
    int presum = 0;
    int res = 0;
    while(j < nums.size()) {
        presum += nums[j];
        while(i <= j && presum > target) {
            presum -= nums[i];
            i++;
        }
        if(presum == target) {
            res = max(res, j-i+1);
            j++;
        }
        if(presum < target) {
            j++;
        }
    }
    return (res == 0) ? -1 : nums.size() - res;
}