int countTriangles(int *arr, int side, int high){
	int count = 0;
	int low = 0;
	while(low < high){
		while(low < high && arr[low] + arr[high] <= side){
			low++;
		}
		count += (high - low);
		high--;
	}
	return count;
}

int findNumberOfTriangles(int arr[], int n){
	sort(arr, arr + n);
	int r = 0;
	for(int i = n-1; i > 1; i--){
		r += countTriangles(arr, arr[i] , i - 1);
	}
	return r;
}