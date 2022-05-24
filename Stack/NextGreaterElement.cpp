void nextGreaterElement(vector<int> arr) {
	stack<int> s;
	for(int i = arr.size() - 1; i >= 0; i--) {
		while(!s.empty() && s.top() <= arr[i]) {
			s.pop();
		}
		int ans = (s.empty()) ? -1 : s.top();
		cout << ans << " ";
		s.push(arr[i]);
	}
}