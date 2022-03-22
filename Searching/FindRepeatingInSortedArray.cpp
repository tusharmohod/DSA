pair<int, int> findRepeatingInSortedArray(int *arr, int n){
	pair<int, int> res;
	int s = 0;
	int e = n - 1;
	int m;
	while(s < e) {
		m = (s + e) / 2;
		if((arr[0] + m) <= arr[m]) {
			s = m + 1;
		}
		else {
			e = m;
		}
	}
	if((arr[0] + n - 1) == arr[n - 1]) {
		res.first = -1;
		res.second = -1;
		return res;
	}
	
	int f = n - (arr[n - 1] - arr[0]);
	res.first = arr[s];
	res.second = f;
	return res;
}