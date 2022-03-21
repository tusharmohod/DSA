void rearrangeAnArrayWithO1Space(int arr[], int n) {
    int divisor = 0;
    int max_element = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    divisor = max_element + 1;

    for(int i = 0; i < n; i++) {
        arr[i] = arr[i] + (arr[arr[i]] % max_element) * max_element;
    }

    for(int i = 0; i < n; i++) {
        arr[i] /= divisor;
    }
}