int longestSubArrayWithEqualNumberOfZeroesAndOnes(vector<int> arr) {
	int res = 0;
	int presum = 0;
	unordered_map<int, int> mp;

	for(int i = 0; i < arr.size(); i++) {
		if(arr[i] == 0) {
			arr[i] = -1;
		}
	}

	for(int i = 0; i < arr.size(); i++) {
		presum += arr[i];
		if(presum == 0) {
			res = i + 1;
		}
		if(mp.find(presum + n) != mp.end()) {
			res = max(res, i - mp[presum]);
		}
		else {
			mp[presum] = i;
		}
	}

	return res;
}