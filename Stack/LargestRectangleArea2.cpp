int largestRectangleArea2(vector<int> arr) {
	stack<int> s;
	int res = 0;
	int n = arr.size();

	for(int i = 0; i < n; i++) {
		while(!s.empty() && arr[s.top()] >= arr[i]) {
			int barElement = s.top();
			s.pop();
			int nextSmallest = i;
			int ans = arr[barElement] * ((s.empty()) ? i : (nextSmallest - s.top() - 1));
			res = max(res, ans);
		}
		s.push(i);
	}
	while(!s.empty()) {
		int barElement = s.top();
		s.pop();
		int ans = arr[barElement] * ((s.empty()) ? n : (n - s.top() - 1));
		res = max(res, ans);
	}

	return res;
}