void frequencyOfLimitedRangeArrayElements(int arr[], int n, int P) {
    for(int i = 0; i < n; i++) {
        arr[i]--;
    }

    for(int i = 0; i < n; i++) {
        arr[arr[i] % n] = arr[arr[i] % n] + n;
    }

    for(int i = 0; i < n; i++) {
        arr[i] /= n;
    }
}