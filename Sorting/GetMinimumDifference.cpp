int getMinimumDifference(int *arr, int n) {
    sort(arr, arr + n);
    int r = INT_MAX;
    for(int i = 1; i < n; i++) {
        r = min(r, arr[i] - arr[i - 1]);
    }
    return r;
}