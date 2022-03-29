void countingSortWithKRange(int arr[], int n) {
    int mn = INT_MAX;
	int	mx = INT_MIN;
    
    for(int i = 0;i < n; i++) {
        mn = min(mn, arr[i]);
        mx = max(mx, arr[i]);
    }
	
	int k = mx - mn + 1;
	
	int count[k];
	
	for(int i = 0; i < k; i++) {
		count[i] = 0;
	}
	
	for(int i = 0; i < n; i++) {
		count[arr[i] - mn]++;
	}
	
	for(int i = 1; i < k; i++) {
		count[i] = count[i] + count[i - 1];
	}
	
	int output[n];
	
	for(int i = n - 1; i >= 0; i--) {
		output[count[arr[i] - mn] - 1] = arr[i];
		count[arr[i] - mn]--;
	}
	
	for(int i = 0; i < n; i++) {
		arr[i] = output[i];
	}
}