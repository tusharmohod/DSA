void naivePartition(int arr[], int l, int h, int m) {
	int temp[h - l + 1];
	int k = 0;
	int res = 0;
	
	for(int i = l; i <= h; i++) {
		if(arr[i] < arr[m]) {
			temp[k] = arr[i]; k++;
		}
	}
	
	for(int i = l; i <= h; i++) {
		if(arr[i] == arr[m]) {
			temp[k] = arr[i]; k++;
		}
	}
	
	res = k + l - 1;
	
	for(int i = l; i <= h; i++) {
		if(arr[i] > arr[m]) {
			temp[k] = arr[i]; k++;
		}
	}
	
	for(int i = l; i <= h; i++) {
		arr[i] = temp[i - l];
	}
	
	return res;
}