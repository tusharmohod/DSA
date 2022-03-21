void maxAndSecondMax(int arr[], int n) {
    int firstMax = arr[0];
    int secondMax = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] > firstMax) {
            secondMax = firstMax;
            firstMax = arr[i];
        }
        else if(arr[i] != firstMax && arr[i] > secondMax) {
            secondMax = arr[i];
        }
    }
}