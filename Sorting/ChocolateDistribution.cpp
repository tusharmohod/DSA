int chocolateDistribution(int arr[], int m) {
	int r = arr[m - 1] - arr[0];
	
	for(int i = 1; (i + m -1) < n; i++) {
		r = min(r, arr[i + (m - 1)] - arr[i]);
	}
	
	return r;
}