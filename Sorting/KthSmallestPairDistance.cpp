int countPairs(vector<int> &nums, int mid) {
    int c = 0;
    int l = 0;
    int n = nums.size();
    for(int r = 0; r < n; r++) {
        while(l < r && (nums[r] - nums[l] > mid)) {
            l++;
        }
        c += (r - l);
    } 
    return c;
}

int smallestDistancePair(vector<int>& nums, int k) {
    int n = nums.size();
    int res = 0;
    sort(nums.begin(), nums.end());
    int low = nums[1] - nums[0];
    for(int i = 2; i < n; i++) {
        low = min(low, (nums[i] - nums[i - 1]));
    }
    int high = nums[n - 1] - nums[0];
    while(low <= high) {
        int mid = (high + low) / 2;
        if(countPairs(nums, mid) >= k) {
            res = mid;
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return res;
}