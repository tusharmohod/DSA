void unionOfTwoSortedArrays(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    while(i < n && j < m) {
        if(i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        if(j > 0 && b[j] == b[j - 1]) {
            j++;
            continue;
        }
        if(a[i] == b[j]) {
            cout << a[i] << " ";
            i++;
            j++;
        }
        else if(a[i] < b[j]) {
            cout << a[i++] << " ";
        }
        else if(a[i] > b[j]) {
            cout << b[j++] << " ";
        }
    }
    while(i < m) {
        if(i > 0 && a[i] != a[i - 1]) {
            cout << a[i++] << " ";
        }
    }
    while(j < n) {
        if(j > 0 && b[j] != b[j - 1]) {
            cout << b[j++] << " ";
        }
    }
}