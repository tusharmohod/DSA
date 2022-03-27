void insertionSort(int arr[], int n) {
    int currElement = -1;
    int j = -1;
    for(int i = 1; i < n; i++) {
        currElement = arr[i];
        j = i - 1;
        while(j >= 0 && currElement < arr[i]) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = currElement;
    }
}