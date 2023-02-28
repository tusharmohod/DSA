// TC : O(f^2 * e)
// SC : O(f * e)

int eggDropping(int floors, int eggs) {
	int dp[floors + 1][eggs + 1];

	for (int i = 1; i <= eggs; i++) {
		dp[0][i] = 0;
		dp[1][i] = 1;
	}

	for (int i = 1; i <= floors; i++) {
		dp[i][1] = i;
	}

	for (int i = 2; i <= floors; i++) {
		for (int j = 2; j <= eggs; j++) {
			dp[i][j] = INT_MAX;

			for (int x = 1; x <= i; x++) {
				int eggBreaks = dp[x - 1][j - 1];
				int eggDoesNotBreaks = dp[i - x][j];

				dp[i][j] = min(dp[i][j], 1 + max(eggBreaks, eggDoesNotBreaks));
			}
		}
	}

	return dp[floors][eggs];
}