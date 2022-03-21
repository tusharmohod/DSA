int trappingRainWater(int arr[], int n) {
    vector<int> L(n);
    vector<int> R(n);
    int res = 0;

    L[0] = arr[0];
    R[n - 1] = arr[n - 1];

    for(int i = 1; i < n; i++) {
        L[i] = max(arr[i], L[i - 1]);
    }

    for(int i = n - 2; i >= 0; i--) {
        R[i] = max(arr[i], R[i + 1]);
    }

    for(int i = 0; i < n; i++) {
        res += (min(L[i], R[i]) - arr[i]);
    }

    return res;
}