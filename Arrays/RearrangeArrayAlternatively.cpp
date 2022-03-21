void rearrangeArrayAlternatively(int *arr, int n) {
    int min_index = 0;
    int max_index = 0;
    int divisor = arr[n - 1] + 1;

    for(int i = 0; i < n; i++) {
        if(i & 1) {
            arr[i] = arr[i] + ((arr[min_index] % divisor) * divisor);
            min_index++;
        }
        else {
            arr[i] = arr[i] + ((arr[max_index] % divisor) * divisor);
            max_index--;
        }
    }

    for(int i = 0; i < n; i++) {
        arr[i] /= divisor;
    }
}