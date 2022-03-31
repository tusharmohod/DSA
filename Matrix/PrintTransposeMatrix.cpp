void printTransposeMatrix(int arr[][n], int n) {
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			swap(arr[i][j], arr[j][i]);
		}
	}
}