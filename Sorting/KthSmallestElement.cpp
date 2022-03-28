int partition(int arr, int l, int r, int p) {
	int t = arr[p];
	arr[p] = arr[r];
	arr[r] = t;

	int pivot = r;
	int i = l - 1;
	
	for(int j = l; j <= r - 1; j++) {
		if(arr[j] < arr[pivot]) {
			i++;
			int temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	int temp = arr[i + 1];
	arr[i + 1] = arr[pivot];
	arr[pivot] = temp;
	
	return i + 1;
}

int kthSmallestElement(int arr, int n) {
	if(k > n) {
		return -1;
	}
	
	int l = 0;
	int r = n - 1;
	
	while(l <= r) {
		int rp = l + (rand() % 10);
		int p = partition(arr, l, r, rp);
		if(p == (k - 1)) {
			return p;
		}
		if(p > (k - 1)) {
			r = p - 1;
		}
		else {
			l = p + 1;
		}
	}
	
	return -1;
}