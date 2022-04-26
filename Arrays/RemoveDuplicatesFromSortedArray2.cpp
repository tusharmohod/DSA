int removeDuplicatesFromSortedArray2(vector<int>& nums) {
    int n = nums.size();
    int l = 0;
    for(int r = 0; r < n; r++) {
        if(l < 2 || nums[l - 2] != nums[r]) {
            nums[l] = nums[r];
            l += 1;
        }
    }
    return l;
}