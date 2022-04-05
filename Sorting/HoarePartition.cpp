int hoarePartition(int arr[], int l, int r) {
	int pivot = arr[l];
	int i = -1;
	int j = r + 1;
	
	while(true) {
		do {
			i++;
		} while(arr[i] < pivot);
		
		do {
			j--;
		} while(arr[j] > pivot);
		
		if(i >= j) {
			return j;
		}
		
		int temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}
}