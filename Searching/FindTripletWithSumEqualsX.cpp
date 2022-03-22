bool findPairWithSumEqualsX(int arr[], int s, int e, int target) {
	while(s < e) {
		if((arr[s] + arr[e]) == target) {
			return true;
		}
		else if((arr[s] + arr[e]) > target) {
			e--;
		}
		else {
			s++;
		}
	
	return false;
}

bool findTripletWithSumEqualsX(int arr[], int n, int target) {
	// if array is unsorted else skip this step
	sort(arr, arr + n);
	
	for(int i = 0; i < n; i++) {
		if(findPairWithSumEqualsX(arr, i + 1, n - 1, target - arr[i])) {
			return true;
		}
	}
	
	return false;
}