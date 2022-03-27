int countAndMerge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int a[n1], b[n2];
    
    for(int i = 0; i < n1; i++) {
        a[i] = arr[l + i];
    }
    
    for(int i = 0; i < n2; i++) {
        b[i] = arr[m + 1 + i];
    }
    
    int i = 0, j = 0, k = l;
    int res = 0;
    
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            arr[k++] = a[i++];
        }
        else {
            arr[k++] = b[j++];
            res = res + n1 - i;
        }
    }
    
    while(i < n1) {
        arr[k++] = a[i++];
    }
    
    while(j < n2) {
        arr[k++] = b[j++];
    }
    return res;
}

int countInversion(int arr[], int l, int r) {
    int res = 0;
    if(l < r) {
        int m = l + ((r - l) / 2);
        res += countInversion(arr, l, m);
        res += countInversion(arr, m + 1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}