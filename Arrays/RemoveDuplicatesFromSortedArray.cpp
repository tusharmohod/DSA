int removeDuplicatesFromSortedArray(vector<int>& nums) {
	int b=1;
	for(int i=0;i<(nums.size()-1);i+=1) {
		if(nums[i]!=nums[i+1]) {
			nums[b]=nums[i+1];
			b+=1;
		}
	}
	return b;
}