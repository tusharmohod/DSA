int searchInRotatedSortedArray(int arr[], int n, int target) {
    int s = 0;
    int e = n - 1;
    int m;
    
    while(s <= e) {
        m = (s + e) / 2;
        if(arr[m] == target) {
            return m;
        }
        if(arr[s] <= arr[m]) {
            if((target >= arr[s]) && (target < arr[m])) {
                e = m - 1;
            }
            else {
                s = m + 1;
            }
        }
        else {
            if((target > arr[m]) && (target <= arr[e])) {
                s = m + 1;
            }
            else {
                e = m - 1;
            }
        }
    }
    
    return -1;
}