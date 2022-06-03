class RangeSumQueryImmutable {
    public:
    vector<int> res;
    RangeSumQueryImmutable(vector<int>& nums) {
        res.resize(nums.size());
        res[0] = nums[0];
        for(int i = 1; i < nums.size(); i++) {
            res[i] = res[i-1] + nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        int sum = 0;
        if(left == 0) {
            sum += res[right];
        }
        else {
            sum += res[right]-res[left-1];
        }
        return sum;
    }
};