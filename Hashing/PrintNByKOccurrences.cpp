void printNByKOccurrences(vector<int> arr, int k) {
	unordered_map<int, int> m;
	int n = arr.size();
	for(int i = 0; i < n; i++) {
		m[arr[i]] += 1;
	}

	for(auto i : m) {
		if(i.second > (n / k)) {
			cout << i.first << endl;
		}
	}
}