int largestRectangleArea(int arr[], int n) {
	stack<int> s;
	int res = 0;
	for(int i = 0; i < n; i++) {
		while(!s.empty() && arr[s.top()] >= arr[i]) {
			int barElement = s.pop();
			int nextSmallest = i;
			int ans = barElement * ((s.empty()) ? i : (nextSmallest - s.top() - 1));
			res = max(res, ans);
		}
	}
	while(!s.empty()) {
		int barElement = s.pop();
		int ans = barElement * ((s.empty()) ? n : (n - s.top() - 1));
		res = max(res, curr);
	}
	return res;
}

int largestRectangleWithAll1(int matrix[][], int r, int c) {
	int res = largestRectangleArea(matrix[0], c);
	for(int i = 1; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(matrix[i][j] == 1) {
				matrix[i][j] = matrix[i - 1][j];
			}
		}
		int ans = largestRectangleArea(matrix[i], c);
		res = max(res, ans);
	}
	return res;
}