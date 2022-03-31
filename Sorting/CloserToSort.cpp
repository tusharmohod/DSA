int closerToSort(int arr[], int n, int x){
	int l = 0, r = n - 1, m;
	while(l <= r){
		m = l + ((r - l) >> 1);
		if(arr[m] == x){
			return m;
		}
		else if(m > 0 && x == arr[m - 1]) {
			return m-1;
		}
		else if(m < n - 1 && x == arr[m + 1]){
			return m+1;
		}
		else if(arr[m] > x){
			r = m - 1;
		}
		else if(arr[m] < x){
			l = m + 1;
		}
	}
	return -1;
}