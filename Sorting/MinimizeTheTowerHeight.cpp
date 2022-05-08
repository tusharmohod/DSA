int minimizeTheTowerHeight(int arr[], int n, int k) {
	if(n == 1) {
		return 0;
	}
	
	sort(arr, arr + n);
	int res = arr[n - 1] - arr[0];
	int smallest = arr[0] + k;
	int largest = arr[n - 1] - k;
	int mn, mx;

	for(int i = 0; i < n - 1; i++) {
		mn = min(smallest, arr[i + 1] - k);
		mx = max(largest, arr[i] + k);
		if(mn < 0) {
			continue;
		}
		res = min(res, mx - mn);
	}

	return res;
}