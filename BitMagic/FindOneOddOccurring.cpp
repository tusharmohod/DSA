int findOneOddOccurring(int *arr, int n) {
	int r = arr[0];
	
	for(int i = 1; i < n; i++) {
		r = r ^ arr[i];
	}
	
	return r;
}