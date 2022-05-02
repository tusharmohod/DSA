int findMaxConsecutiveOnes(vector<int>& nums) {
    int res = 0;
    int cres;
    (nums[0] == 0) ? cres = 0 : cres = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] == nums[i - 1]) {
            if(nums[i] == 1) {
                cres++;
            }
        }
        else {
            res = max(res, cres);
            (nums[i] == 0) ? cres = 0: cres = 1;
        }
    }
    res = max(res, cres);
    return res;
}