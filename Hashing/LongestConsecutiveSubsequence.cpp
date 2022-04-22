int longestConsecutiveSubsequence(vector<int> arr) {
	int res = 0;
	int curr_res = 1;
	unordered_set<int> s;

	for(int i = 0; i < arr.size(); i++) {
		s.insert(arr[i]);
	}

	for(auto x : s) {
		if(s.find(x - 1) == s.end()) {
			curr_res = 1;
			int i = 1;
			while(s.find(x + i) != s.end()) {
				curr_res += 1;
				i += 1;
			}
			res = max(res, curr_res);
		}
	}

	return res;
}