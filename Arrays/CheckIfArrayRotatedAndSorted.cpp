bool isNonDecreasing(int arr[], int s, int e) {
    int c = 0;
    for(int i = s; i < e; i++) {
        if(arr[i] > arr[(i + 1) % e]) {
            c++;
        }
    }
    return c <= 1; 
}

bool isNonIncreasing(int arr[], int s, int e) {
    int c = 0;
    for(int i = s; i < e; i++) {
        if(arr[i] < arr[(i + 1) % e]) {
            c++;
        }
    }
    return c <= 1;
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
        return isNonDecreasing(arr, 0, n);
    }
    
    if(maxIndex == minIndex + 1) {
        return isNonIncreasing(arr, 0, n);
    }
    
    return false;
}