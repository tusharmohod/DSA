const int charCount = 256;
bool searchAnagram(string st, string pt) {
	int n = st.length();
	int m = pt.length();
	vector<int> stc(charCount, 0);
	vector<int> ptc(charCount, 0);

	for(int i = 0; i < m; i++) {
		stc[st[i]] += 1;
		ptc[pt[i]] += 1;
	}

	for(int i = m; i < n; i++) {
		if(stc == ptc) {
			return true;
		}
		stc[st[i]] += 1;
		ptc[st[i - m]] -= 1;
	}
	return false;
}