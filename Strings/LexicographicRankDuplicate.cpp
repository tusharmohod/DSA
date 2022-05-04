int factorial(int n) {
	int res = 1;
	for(int i = 2; i <= n; i++) {
		res *= i;
	}
	return res;
}

int lexicographicRankDuplicate(string s) {
	int rank = 1;
	int n = s.length();
	int fact = factorial(n);
	for(int i = 0; i < (n - 1); i++) {
		int c = 0;
		fact = fact / (n - i);
		
		vector<int> d_count(26, 0);

		for (int j = i; j < n; j++){
			d_count[s[j] - 'a'] += 1;
		}

		int d_fac = 1;
		for (int e : d_count)
			d_fac *= factorial(e);
			
		rank = rank + ((count[s[i] - 1] * fact) / d_fac);
		for(int j = s[i]; j < 256; j++) {
            count[j]--;
        }
	}
	return rank;	
}

