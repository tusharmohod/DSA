void printSnakePattern(int arr[][n], int m, int n) {
	for(int i = 0; i < m; i++) {
		if(i & 1) {
			for(int j = n - 1; j >= 0; j--) {
				cout << arr[j] << " ";
			}
		}
		else {
			for(int j = 0; j < n; j++) {
				cout << arr[j] << " ";
			}
		}
	}
}