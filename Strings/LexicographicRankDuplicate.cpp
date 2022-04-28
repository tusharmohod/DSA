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
		int count = 0;
		fact = fact / (n - i);
		for(int j = i + 1; j < n; j++) {
			if(s[i] > s[j]) {
				count += 1;
			}
		}
		rank = rank + (count * fact);
	}
	return rank;	
}