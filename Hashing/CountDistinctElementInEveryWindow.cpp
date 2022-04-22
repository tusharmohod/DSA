vector<int> countDistinctElementInEveryWindow(vector<int> arr, int window) {
	vector<int> res;
	unordered_map<int, int> m;

	for(int i = 0; i < window; i++) {
		m[arr[i]] += 1;
	}
	res.push_back(m.size());

	for(int i = window; i < arr.size(); i++) {
		m[arr[i - window]] -= 1;
		if(m[arr[i - window]] == 0) {
			m.erase(arr[i - window]);
		}
		m[arr[i]] += 1;
		res.push_back(m.size());
	}

	return res;
}