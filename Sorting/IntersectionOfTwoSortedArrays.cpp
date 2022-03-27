void intersectionofTwoSortedArrays(int a[], int b[], int n, int m) {
    int i = 0, j = 0;
    while((i < n) && (j < m)) {
        if(i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        if(a[i] == b[j]) {
            cout << a[i] << " ";
            i++; 
            j++;
        }
        else if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
    }
}