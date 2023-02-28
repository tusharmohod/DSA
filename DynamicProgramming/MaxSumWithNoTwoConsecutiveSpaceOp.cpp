// TC : O(n)
// SC : O(1)

int maxSumWithNoTwoConsecutiveSpaceOp(int *arr, int index, int n) {
    if (n == 1) {
        return arr[0];
    }
    int prev_prev = arr[0];
    int prev = max(arr[0], arr[1]);
    int res = prev;
    
    for (int i = 3; i <= n; i++) {
        res = max(prev_prev + arr[i - 1], prev);
        prev_prev = prev;
        prev = res;
    }
    
    return res;
}