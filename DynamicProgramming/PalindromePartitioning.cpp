// TC : O(n^3)
// SC : O(n^2)

bool isPalindrome(string &st, int i, int j) {
	while (i < j && st[i++] == st[j--]);
	return i >= j;
}


int palindromePartitioning(string st) {
	int n = st.size();

	int dp[n][n];
	bool isPal[n][n];

	for (int i = 0; i < n; i++) {
		dp[i][i] = 0;
		isPal[i][j] = true;
	}

	for (int gap = 1; gap < n; gap++) {
		for (int i = 0; i + gap < n; i++) {
			int j = i + gap;
			if ((st[i] == st[j]) && (isPalindrome(st, i + 1, j - 1) == true || gap == 1)) {
				dp[i][j] = 0;
				isPal[i][j] = true;
			} else {
				isPal[i][j] = false;
				dp[i][j] = INT_MAX;
				for (int k = i; k < j; k++) {
					dp[i][j] = min(dp[i][j], 1 + dp[i][k] + dp[k + 1][j]);
				}
			}
		}
	}

	return dp[0][n - 1];
}