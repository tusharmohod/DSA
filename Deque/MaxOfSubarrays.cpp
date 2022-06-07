vector<int> maxOfSubarrays(int *arr, int n, int k) {
    vector<int> res(n - k + 1);
    int j = 0;
    deque<int> dq;
    for(int i = 0; i < k; i++) {
        while(!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
    }
    res[j++] = arr[dq.front()];
    for(int i = k; i < n; i++) {
        while(!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }
        while(!dq.empty() && arr[i] >= arr[dq.back()]) {
            dq.pop_back();
        }
        dq.push_back(i);
        res[j++] = arr[dq.front()];
    }
    return res;
}