// TC : O(n)
// SC : O(n)

int maxSumWithNoTwoConsecutive(int *arr, int n) {
    int dp[n];
    
    dp[0] = 0;
    dp[1] = arr[0];
    dp[2] = max(arr[0], arr[1]);
    
    for (int i = 3; i <= n; i++) {
        dp[i] = max(arr[i - 1] + dp[i - 2], dp[i - 1]);
    }
    
    return dp[n];
}