bool findPairWithSumEqualsX(int arr[], int n, int target) {
	int s = 0;
	int e = n - 1;

	// if array is unsorted else skip this step
	sort(arr, arr + n);
	
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
	}
	
	return false;
}