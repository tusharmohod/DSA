int maximumProductSubArray(int arr[], int n) {
	int res = INT_MIN;
	int p = 1;
	for(int i = 0; i < n; i++) {
		p *= arr[i];
		res = max(res, p);
		if(p == 0) {
			p = 1;
		}
	}
	p = 1;
	for(int i = n - 1; i >= 0; i--) {
		p *= arr[i];
		res = max(res, p);
		if(p == 0) {
			p = 1;
		}
	}
	return res;
}