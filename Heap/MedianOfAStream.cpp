vector<double> medianOfAStream(vector<double> &arr) {
	priority_queue<double> s;
	priority_queue<double, vector<double>, greater<double>> g;

	vector<double> ans;
	int n = arr.size();
	s.push(arr[0]);

	for (int i = 1; i < n; i++) {
		if (s.size() > g.size()) {
			if (s.top() > arr[i]) {
				g.push(s.top());
				s.pop();
				s.push(arr[i]);
			} else {
				g.push(arr[i]);
			}
			ans.push_back((s.top() + g.top()) / 2.0);
		} else {
			if (s.top() > arr[i]) {
				g.push(arr[i]);
				s.push(g.top());
				g.pop();
			} else {
				s.push(arr[i])
			}
			ans.push_back(s.top() / 2.0);
		}
	}

	return ans;
}