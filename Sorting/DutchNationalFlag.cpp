void sort(int arr[], int n) {
    int l = 0;
    int r = n - 1;
    int m = 0;
    while(m <= r) {
        if(arr[m] == 0) {
            int t = arr[m];
            arr[m] = arr[l];
            arr[l] = t;
            i++;
            m++;
        }
        else if(arr[m] == 1) {
            m++;
        }
        else {
            int t = arr[m];
            arr[m] = arr[h];
            arr[h] = t;
            h--;
        }
    }
}