void moveZeroesToEnd(vector<int>& nums) {
	int zc = -1;
	
	for(int i = 0; i < nums.size(); i++) {
		if(zc > -1 && nums[i] != 0) {
			int temp = nums[i];
			nums[i] = nums[zc];
			nums[zc] = temp;
			zc++;
		}
		else if(nums[i] == 0 && zc == -1) {
			zc = i;
		}
	}
}