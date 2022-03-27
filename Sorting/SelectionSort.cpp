void selectionSort(int arr[], int n) {
    int smallest = -1;
    for(int i = 0; i < n - 1; i++) {
        smallest = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[smallest] > arr[j]) {
                smallest = j;
            }
        }
        if(smallest != i) {
            int temp = arr[smallest];
            arr[smallest] = arr[i];
            arr[i] = temp;
        }
    }
}