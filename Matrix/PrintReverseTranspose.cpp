void printReverseTranspose(int arr[][n], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = n - i - 1; j >= 0; j--) {
			swap(arr[i][j], arr[n - j - 1][n - i - 1]);
		}
	}
}