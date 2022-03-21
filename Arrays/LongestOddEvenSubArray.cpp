int longestOddEvenSubArray(int arr[], int n) {
    int res = 1;
    int curr_res = 1;
    
    for(int i = 1; i < n; i++) {
        if((arr[i] % 2 == 1 && arr[i - 1] % 2 == 0) || (arr[i] % 2 == 0 && arr[i - 1] % 2 == 1)) {
            curr_res++;
            res = max(curr_res, res);
        }
        else {
            curr_res = 1;
        }
    }
    
    return res;
}