int findClosestNumber(vector<int>& nums) {
    int diff = abs(nums[0] - 0);
    int num = nums[0];
    for(int i = 1; i < nums.size(); i++) {
        if(diff >= abs(nums[i] - 0)) {
            if(num == -nums[i] && nums[i] > num) {
                num = nums[i];
            }
            else if(num != -nums[i]){
                num = nums[i];
            }
            diff = abs(nums[i] - 0);
        }
    }
    return num;
}