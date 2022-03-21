int kadane(int arr[], int n) {
    int res = arr[0];
    int curr_res = arr[0];

    for(int i = 1; i < n; i++) {
        curr_res = max(curr_res + arr[i], arr[i]);
        res = max(res, curr_res);
    }

    return res;
}

int circularSubarrySum(int arr[], int n) {
    int normalSubarraySum = kadane(arr, n);
    int arraySum = 0;

    if(normalSubarraySum < 0) {
        return normalSubarraySum;
    }

    for(int i = 0; i < n; i++) {
        arraySum += arr[i];
        arr[i] = -arr[i];
    }

    int circularSubarraySum = arraySum + kadane(arr, n);
    int res = max(normalSubarraySum, circularSubarraySum);

    return res;
}