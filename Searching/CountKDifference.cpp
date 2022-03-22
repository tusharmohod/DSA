int countKDifference(vector<int>& arr, int k) {
	int n = arr.size();
	int res = 0;
	
	unordered_map<int, int> m;
	
	for(int i = 0; i < n; i++) {
		m[arr[i]]++;
	}
	
	for(auto itr = m.begin(); itr != m.end(); itr++) {
		int num = (itr->first);
		int numval = m[num];
		int otherNum = (itr->first) + k;
		
		if(m.count(otherNum)) {
			res = res + ((itr->second) * m[otherNum]);
		}
	}
	
	return res;
}