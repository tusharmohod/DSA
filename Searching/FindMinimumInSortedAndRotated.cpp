int findMinimumInSortedAndRotated(int arr[], int n){
    int l = 0, r = n - 1;
    while(l < r) {
        int m = (l + r) >> 1;
        if(arr[m] < arr[r]) {
            r = m;
        }
        else {
            l = m + 1;
        }
    }
    return arr[l];
}