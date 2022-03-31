int medianOfRowWiseSortedMatrix(int arr[][MAX], int r, int c) {
	int mn = arr[0][0], mx = arr[0][c-1];

	for(int i = 1; i < c; i++) {
		mn = min(mn, arr[i][0]);
		mx = max(mx, arr[i][c-1]);
	}

	int medPos = ((r * c) + 1) / 2;

	while(mn < mx) {
		int mid = (mn + mx) / 2;
		int midPos = 0;

		for(int i = 0; i < r; i++) {
			midPos += upper_bound(arr[i], arr[i] + c, mid) - arr[i];
		}

		if(midPos < medPos) {
			mn = mid + 1;
		}
		else {
			mx = mid;
		}
	}
	return mn;
}