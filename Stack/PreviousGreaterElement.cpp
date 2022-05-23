void previousGreaterElement(vector<int> arr) {
	stack<int> s;
	for(int i = 0; i < arr.size(); i++) {
		while(!s.empty() && s.top <= arr[i]) {
			s.pop();
		}
		int ans = (s.empty()) ? -1 : s.top();
		cout << ans << " ";
		s.push(arr[i]);
	}
}