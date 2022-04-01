int subArraySumOnlyPositive(int arr[], int n, int target) {
    int sum = 0, j = 0;
    for(int i = 0; i < n; i++) {
        sum += arr[i];
        while(j < i && sum > target) {
            sum -= arr[j++];
        }
        if(sum == target) {
            printf ("%d %d ", j, i);
        }
    }
    return 0;
}