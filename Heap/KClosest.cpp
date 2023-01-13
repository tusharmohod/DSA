struct cmp {
    bool operator() (pair<int, int> &a, pair<int, int> &b) {
        return a.first > b.first;
    }
};
    
vector<int> kClosest(int arr[], int n, int k, int x) {
    priority_queue<pair<int, int>> pq;
    vector<int> ans;
    
    for (int i = 0; i < k; i++) {
        pq.push({abs(arr[i] - x), arr[i]});
    }
    
    for (int i = k; i < n; i++) {
        int diff = abs(arr[i] - x);
        if (pq.top().first > diff) {
            pq.push({diff, arr[i]});
            pq.pop();
        }
    }

    while (pq.empty() == false) {
        ans.push_back(pq.top().second);
        pq.pop();
    }
    
    return ans;
}