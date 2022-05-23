vector<int> prevSmallestElement(vector<int> &arr) {
	stack<int> s;
	vector<int> res;
	for(int i = 0; i < arr.size(); i++) {
		while(!s.empty() && s.top() >= arr[i]) {
			s.pop();
		}
		int ans = (s.empty()) ? -1 : s.top();
		res.push_back(ans);
		s.push(arr[i]);
	}
	return res;
}

vector<int> nextSmallestElement(vector<int> &arr) {
	stack<int> s;
	vector<int> res;
	for(int i = arr.size() - 1; i >= 0; i--) {
		while(!s.empty() && s.top() >= arr[i]) {
			s.pop();
		}
		int ans = (s.empty()) ? arr.size() : s.top();
		res.push_back(ans);
		s.push(arr[i]);
	}
	return res;
}

int largestRectangleArea1(vector<int> arr) {
	vector<int> prev = prevSmallestElement(arr);
	vector<int> next = nextSmallestElement(arr);
	int res = 0;
	for(int i = 0; i < arr.size(); i++) {
		int l = arr[i];
		int b = next[i] - prev[i] - 1;
		int currMax = l * b;
		res = max(res, currMax);
	}
	return res;
}