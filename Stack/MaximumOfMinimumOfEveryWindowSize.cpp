vector <int> maximumOfMinimumOfEveryWindowSize(int arr[], int n) {
    vector<int> res(n + 1, 0), ans(n);
    vector<int> pse(n + 1), nse(n + 1);
    stack<int> s;
    pse[0] = -1;
    nse[n] = n;
    for(int i = 0; i < n; i++) {
        while(!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        int ans = s.empty() ? -1 : s.top();
        pse[i] = ans;
        s.push(i);
    }
    
    while(!s.empty()) {
        s.pop();
    }
    
    for(int i = n - 1; i >= 0; i--) {
        while(!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        int ans = s.empty() ? n : s.top();
        nse[i] = ans;
        s.push(i);
    }
    
    for(int i = 0; i < n; i++) {
        int len = nse[i] - pse[i] - 1;
        res[len] = max(res[len], arr[i]);
    }
    
    for(int i = n - 1; i >= 1; i--) {
        res[i] = max(res[i], res[i + 1]);
    }
    
    for(int i = 1; i <= n; i++) {
        ans[i - 1] = res[i];
    }
    
    return ans;
}