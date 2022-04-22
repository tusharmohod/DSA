void printNByKOccurrencesForLargeNAndSmallK(vector<int> arr, int k) {
	unordered_map<int, int> m;
	int n = arr.size();
	int count = 0;
	for(int i = 0; i < n; i++) {
		if(m.size() < (k - 1)) {
			m[arr[i]] += 1;
		}
		else if(m.size() == (k - 1)) {
			for(auto e : m) {
				e.second -= 1;
			}
		}
	}

	for(auto e : m) {
		count = 0;
		for(int i = 0; i < n; i++) {
			if(arr[i] == e.first) {
				count += 1;
			}
		}
		if(count > (n / k)) {
			cout << e.first << " ";
		}
	}
}