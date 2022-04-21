bool subArrayWithZeroSum(vector<int> arr) {
	unordered_set<int> s;
	int presum = 0;
	for(int i = 0; i < arr.size(); i++) {
		presum += arr[i];
		if(s.find(presum) != s.end()) {
			return true;
		}
		if(presum == 0) {
			return true;
		}
		s.insert(presum);
	}
	return false;
}