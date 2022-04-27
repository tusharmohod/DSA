void patternSearchNaiveDistinct(string s, string p) {
	int n = s.length();
	int m = p.length();
	int i = 0, j = 0;
	while(i <= (n - m)) {
		j = 0;
		while(j < m) {
			if(s[i + j] != p[j]) {
				break;
			}
			j += 1;
		}
		if(j == m) {
			cout << i << " ";
		}
		else if(j == 0) {
			i += 1
		}
		else {
			i += j;
		}
	}
}