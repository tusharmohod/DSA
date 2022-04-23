long long int subArraysWithEqual0And1(int arr[], int n) {
    long long int res = 0;
    unordered_map<int, int> m;
    int presum = 0;
    m[0] = 1;
    for(int i = 0; i < n; i++) {
        if(arr[i] == 0) {
            arr[i] = -1;
        }
    }
    m[0] = 1;
    for(int i = 0; i < n; i++) {
        presum += arr[i];
        if(m.find(presum) != m.end()) {
            res += m[presum];
        }
        m[presum] += 1;
    }
    return res;
}