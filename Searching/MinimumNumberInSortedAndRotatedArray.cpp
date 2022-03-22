int minimumNumberInSortedAndRotatedArray(int arr[], int low, int high) {
	int s = low;
	int e = high;
	int m;
	
	while(s <= e) {
		m = (s + e) / 2;
		if(arr[m] == arr[e]) {
			return arr[m];
		}
		if(arr[m] > arr[e]) {
			s = m + 1;
		}
		else {
			e = m;
		}
	}
	return -1;
}