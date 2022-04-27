vector<int> LongestProperPrefxSuffix(string s) {
	int n = s.length();
	int len = 0;
	vector<int> lps(n, 0);
	int i = 1;
	while(i < n) {
		if(s[i] == s[len]) {
			len += 1;
			lps[i] = len;
			i += 1;
		}
		else {
			if(len == 0) {
				lps[i] = 0;
				i += 1;
			}
			else {
				len = lps[len - 1];
			}
		}
	}
	return lps;
}