const int charCount = 256;

int factorial(int n) {
	int r = 1;
	for(int i = 2; i <= n; i++) {
		r *= i;
	}
	return r;
}

int lexicographicRank(string s) {
	int n = s.length();
	int rank = 1;
	int fact = factorial(n);
	int count[charCount] = {0};
	for(int i = 0; i < n; i++) {
		count[s[i]] += 1;
	}
	for(int i = 1; i < charCount; i++) {
		count[i] += count[i - 1];
	}
	for(int i = 0; i < (n - 1); i++) {
		fact = fact / (n - i);
		rank = rank + (count[s[i] - 1] * fact);
		for(int j = s[i]; j < charCount; j++) {
			count[j] -= 1;
		}
	}
	return rank;
}