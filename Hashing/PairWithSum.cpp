bool pairWithSum(vector<int> arr, int sum) {
	unordered_set<int> s;
	for(int i = 0; i < arr.size(); i++) {
		if(s.find(sum - arr[i]) != s.end()) {
			return true;
		}
		else {
			s.insert(arr[i]);
		}
	}
	return false;
}