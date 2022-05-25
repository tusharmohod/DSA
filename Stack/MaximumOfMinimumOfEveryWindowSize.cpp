vector <int> maximumOfMinimumOfEveryWindowSize(int arr[], int n) {
    vector<int> res(n, 0);
    vector<int> pse(n, -1), nse(n, n);
    stack<int> s;
    for(int i = 0; i < n; i++) {
        while(!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        if(!s.empty()) pse[i] = s.top();
        s.push(i);
    }
    
    while(!s.empty()) {
        s.pop();
    }
    
    for(int i = n - 1; i >= 0; i--) {
        while(!s.empty() && arr[s.top()] >= arr[i]) {
            s.pop();
        }
        if(!s.empty()) nse[i] = s.top();
        s.push(i);
    }
    
    for(int i = 0; i < n; i++) {
        int len = nse[i] - pse[i] - 1 - 1;
        res[len] = max(res[len], arr[i]);
    }
    
    for(int i = n - 2; i >= 0; i--) {
        res[i] = max(res[i], res[i + 1]);
    }
    
    return res;
}