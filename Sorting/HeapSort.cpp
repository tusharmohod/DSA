void heapify(int arr[], int i, int n) {
	int left = i << 1;
	int right = (i << 1) + 1;
	int largest = i;
	
	if(left < n && arr[largest] < arr[left]) {
		largest = left;
	}
	if(right < n && arr[largest] < arr[right]) {
		largest = right;
	}
	
	if(i != largest) {
		swap(arr[i], arr[largest]);
		heapify(arr, largest, n);
	}
}

void buildHeap(int arr[], int n) {
	int start = (n - 2) >> 1;
	for(int i = start; i >= 0; i--) {
		heapify(arr, i, n);
	}
}

void heapSort(int arr[], int n) {
	buildHeap(arr, n);
	for(int i = n - 1; i >= 1; i--) {
		swap(arr[0], arr[i]);
		heapify(arr, 0, i);
	}
}