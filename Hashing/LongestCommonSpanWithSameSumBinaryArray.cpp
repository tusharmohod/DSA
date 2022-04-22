int longestCommonSpanWithSameSumBinaryArray(vector<int> a, vector<int> b) {
	int res = 0;
	int presum = 0;
	int n = a.size();
	vector<int> temp(n, 0);
	unordered_map<int, int> mp;
	
	for(int i = 0; i < n; i++) {
		temp[i] = a[i] - b[i];
	}

	for(int i = 0; i < n; i++) {
		presum += temp[i];

		if(presum == 0) {
			res = i + 1;
		}

		if(mp.find(presum) != mp.end()) {
			res = max(res, i - mp[presum]);
		}
		else {
			mp[presum] = i;
		}
	}

	return res;
}