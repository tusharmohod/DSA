int longestSubArrayWithGivenSum(vector<int> arr, int sum) {
	unordered_map<int, int> mp;
	int res = 0;
	int presum = 0;

	for(int i = 0; i < arr.size(); i++) {
		presum += arr[i];
		if(presum == sum) {
			res = max(res, i + 1);
		}
		if(mp.find(presum) == mp.end()) {
			m[presum] = i;
		}
		if(mp.find(presum - sum) != mp.end) {
			res = max(res, i - mp[presum - sum]);
		}
	}

	return res;
}