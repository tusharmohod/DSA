void bubbleSort(int arr[], int n) {
    bool isSorted = true;
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                int sw = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = sw;
                isSorted = false;
            }
        }
        if(isSorted) {
            break;
        }
        isSorted = true;
    }
}