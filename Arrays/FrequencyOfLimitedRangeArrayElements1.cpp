void frequencyOfLimitedRangeArrayElements(int arr[], int n, int P) {
    int pos;
    int i = 0;
    
    while (i < n) {
        pos = arr[i] - 1;
        if (arr[i] > 0 && arr[pos] > 0) {
            arr[i] = arr[pos];
            arr[pos] = -1;
        }
        else if (arr[i] > 0) {
            arr[pos]--;
            arr[i++] = 0;
        }
        else {
            i++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << (i + 1) << " " << abs(arr[i]));
    }
}