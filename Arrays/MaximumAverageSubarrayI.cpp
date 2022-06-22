double maximumAverageSubarrayI(vector<int>& nums, int k) {
    int n = nums.size();
    double sum = 0.0;
    double res = (double)INT_MIN;
    for(int i = 0; i < k; i++) {
        sum += nums[i];
    }
    res = max(res, (sum / (k * 1.0)));
    for(int i = k; i < n; i++) {
        sum = sum - nums[i - k];
        sum += nums[i];
        res = max(res, (sum / (k * 1.0)));
    }
    return res;
}