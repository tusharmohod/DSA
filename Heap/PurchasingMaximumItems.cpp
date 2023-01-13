int purchasingMaximumItems(vector<int> &arr, int sum) {
	priority_queue<int, vector<int>, greater<int>> pq(arr.begin(), arr.end());
	int ans = 0;
	
	while (pq.empty() == false) {
		if (sum - pq.top() < 0) {
			break;
		}
		sum -= pq.top();
		pq.pop();
		ans++;
	}

	return ans;
}