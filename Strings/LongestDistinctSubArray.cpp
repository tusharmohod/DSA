int LongestDistinctSubArray(string st) {
	int n = st.length();
	int res = 0;
	vector<int> prev(256, -1);
	int l = 0;
	for(int r = 0; r < n; r++) {
		l = max(l, prev[st[r]] + 1);
		int maxEnd = r - l + 1;
		res = max(res, maxEnd);
		prev[st[r]] = r;
	}
	return res;
}