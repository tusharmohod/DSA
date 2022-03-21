int equilibrium(int arr[], int n) {
    int presum = 0;
    int lsum = 0;
    int rsum = 0;
    int eqPoint;

    for(int i = 0; i < n; i++) {
        presum += arr[i];
    }

    for(int i = 0; i < n; i++) {
        eqPoint = i;
        presum -= arr[i];
        rsum = presum
        if(lsum == rsum) {
            return i + 1;
        }
        lsum += arr[i] 
    }
    
    return -1;
}