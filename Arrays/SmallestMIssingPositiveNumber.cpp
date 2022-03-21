int smallestMissingPostiveNumber(int arr[], int n) {
    int currentPosition;
    for(int i = 0; i < n; i++) {
        currentPosition = arr[i] - 1;
        while((arr[i] >= 0) && (arr[i] <= n) && (arr[i] != arr[currentPosition])) {
            int temp = arr[i];
            arr[i] = arr[currentPosition];
            arr[currentPosition] = temp;
            currentPosition = arr[i] - 1;
        }
    }
    for(int i = 0; i < n; i++) {
        if(i + 1 != arr[i]) {
            return i + 1;
        }
    }
    return n + 1;
}