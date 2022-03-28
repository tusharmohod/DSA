void segregatePositiveNegative (int a[], int n) {
    int pivot = 0;
    int i = -1;
    for(int j = 0; j < n; j++){
        if(a[j] <= pivot){
            i++;
            int t = a[i];
            a[i] = a[j];
            a[j] = t;
        }
    }
}