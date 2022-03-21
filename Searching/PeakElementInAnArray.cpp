int peakElementInAnArray(int arr[], int n) {
    int s = 0;
    int e = n - 1;
    int m;
    
    while(s <= e) {
        m = (s + e) / 2;
        if(((m == 0) || (arr[m] >= arr[m - 1])) && ((m == n - 1) || (arr[m] >= arr[m + 1]))) {
            return m;
        }
        if((m > 0) && (arr[m - 1]) >= arr[m]) {
            e = m - 1;
        }
        else {
            s = m + 1;
        }
    }
    
    return -1;
}