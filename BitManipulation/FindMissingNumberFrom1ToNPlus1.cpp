int findMissingNumberFrom1ToN+1(int *arr, int n) {
	int r = 0;

	for(int i = 1; i <= (n + 1); i++) {
		r = r ^ i;
	}
	
	for(int i = 0; i < n; i++) {
		r = r ^ arr[i];
	}
	
	return r;
}