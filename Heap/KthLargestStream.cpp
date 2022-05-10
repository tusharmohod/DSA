vector<int> kthLargest(int k, int arr[], int n) {
    vector<int> res;
    priority_queue<int, vector<int>, greater<int>> pq;
    for(int i = 0; i < k; i++) {
        pq.push(arr[i]);
        if(i < k - 1) {
            res.push_back(-1);
        }
    }
    for(int i = k; i < n; i++) {
        res.push_back(pq.top());
        if(arr[i] > pq.top()) {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    res.push_back(pq.top());
    return res;
}