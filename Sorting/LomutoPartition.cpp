int lomutoPartition(int arr, int l, int r) {
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