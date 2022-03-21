int searchAnElementInSortedInfinitedArray(int arr[], int n, int target) {
    int i = 1;
    int s, e;
    int res = 0;
    int m; 

    if(arr[0] == target) {
        return 0;
    }

    while(arr[i] < target) {
        i = i * 2;
    } 

    if(arr[i] == target) {
        return i;
    }

    e = i - 1;
    s = (i / 2) + 1;

    while(s <= e) {
        m = (s + e) / 2;
        if(arr[m] == target) {
            return m;
        }
        else if(arr[m] > target) {
            e = m - 1;            
        }
        else {
            s = m + 1;
        }
    }
}