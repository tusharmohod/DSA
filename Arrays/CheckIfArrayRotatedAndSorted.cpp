bool isNonDecreasing(int arr[], int s, int e) {
    for(int i = s; i < e; i++) {
        if(arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool isNonIncreasing(int arr[], int s, int e) {
    for(int i = s; i < e; i++) {
        if(arr[i] < arr[i + 1]) {
            return false;
        }
    }
    return true;
}

bool checkIfArrayRotatedAndSorted(int arr[], int n) {
    int minIndex = 0;
    int maxIndex = 0;
    
    for(int i = 0 ; i < n; i++) {
        if(arr[i] < arr[minIndex]) {
            minIndex = i;
        }
        if(arr[i] > arr[maxIndex]) {
            maxIndex = i;
        }
    }
    
    if(minIndex == maxIndex + 1) {
        return isNonDecreasing(arr, 0, maxIndex) && isNonDecreasing(arr, minIndex, n - 1) && (arr[0] > arr[n - 1]);
    }
    
    if(maxIndex == minIndex + 1) {
        return isNonIncreasing(arr, 0, minIndex) && isNonIncreasing(arr, maxIndex, n - 1) && (arr[0] < arr[n - 1]);
    }
    
    return false;
}