vector<pair<int, pair<int, int>>> countTripletsWithSumEqualsX(vector<int> &arr, int target) {
	vector<pair<int, pair<int, int>>> res;
	int n = arr.size();
	if(n <= 2) {
		return res;
	}
	sort(arr.begin(), arr.end());
	for(int i = 0; i < n - 2; i++) {
	    if(i > 0 && arr[i] == arr[i - 1]) {
	    	continue;
	    }
		int num = arr[i];
		int l = i + 1;
		int r = n - 1;
		while(l < r) {
			int sum = num + arr[l] + arr[r]; 
			if(sum == target) {
				pair<int, pair<int, int>> p;
				p.first = num;
				p.second.first = arr[l];
				p.second.second = arr[r];
				res.push_back(p);
				while(l < n - 1 && arr[l] == arr[l + 1]) l++;
				while(r > 0 && arr[r] == arr[r - 1]) r--;
				l++;
				r--;
			}
			else if(sum > target) {
				r--;
			}
			else {
				l++;
			}
		}
	}
	return res;
}