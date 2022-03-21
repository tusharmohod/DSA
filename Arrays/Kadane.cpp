int kadane(int arr[], int n) {
    int max_res = arr[0];
    int curr_max = arr[0];

    for(int i = 1; i < n; i++) {
        curr_max = max(curr_max + arr[i], arr[i]);
        max_res = max(max_res, curr_max);
    }

    return max_res;
}