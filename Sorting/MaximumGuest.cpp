int maximumGuest(int arr[], int dept[], int n) {
    sort(arr, arr + n);
    sort(dept, dept + n);
    int i = 1, j = 0, res = 1, curr = 1;
    while(i < n && j < n) {
        if(arr[i] <= dept[j]) {
            curr++;
            i++;
        }
        else {
            curr--;
            j++;
        }
        res = max(res, curr);
    }
    return res;
}