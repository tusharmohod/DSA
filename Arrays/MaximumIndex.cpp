int maximumIndex(int arr[], int n) {
    vector<int> L(n);
    vector<int> R(n);
    int res = INT_MIN;

    L[0] = arr[0];
    R[n - 1] = arr[n - 1];

    for(int i = 1; i < n; i++) {
        L[i] = min(arr[i], L[i - 1]);
    }

    for(int i = n - 2; i >= 0; i--) {
        R[i] = max(arr[i], R[i + 1]);
    }
    
    for(int i = 0, j = 0; (i < n) && (j < n); ) {
        if(L[i] <= R[j]) {
            res = max(res, j - i);
            j++;
        }
        else {
            i++;
        }
    }

    return res;
}