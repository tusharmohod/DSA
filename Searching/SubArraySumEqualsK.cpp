vector<int> subarraySum(int arr[], int n, long long k) {
	int sum = arr[0];
	int left = 0;
	
	for(int i = 1; i <= n; i++) {
		while(sum > k && left < n - 1) {
			sum = sum - arr[left];
			left++;
		}
		
		if(sum == k) {
			return vector<int>{left + 1, i};
		}
		
		if(i < n) {
			sum += arr[i];
		}
	}
	
	return vector<int>{-1};
}