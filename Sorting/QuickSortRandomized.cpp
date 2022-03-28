void quickSortRandomized(int arr, int l, int r) {
	if(l < r) {
		int randomPivot = l + (rand() % 10);
		int p = partition(arr, l, randomPivot);
		quickSort(arr, l, p - 1);
		quickSort(arr, p + 1, r);
	}
}