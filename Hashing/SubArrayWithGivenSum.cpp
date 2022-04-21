bool subArrayWithGivenSum(vector<int> arr, int sum) {
	int presum = 0;
	unordered_set<int> s;

	for(int i = 0; i < arr.size(); i++) {
		presum += arr[i];
		if(s.find(presum - sum) != s.end()) {
			return true;
		}
		if(presum == sum) {
			return true;
		}
		s.insert(presum);
	}

	return false;
}