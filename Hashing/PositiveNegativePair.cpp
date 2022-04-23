vector <int> PositiveNegativePair(int arr[], int n) {
    unordered_set<int> s;
    vector<int> res;
    for(int i = 0; i < n; i++) {
        s.insert(arr[i]);
    }
    for(int i = n - 1; i >= 0; i--) {
        if(arr[i] == 0) {
            continue;
        }
        if(s.find(-arr[i]) != s.end()) {
            if(arr[i] > 0) {
                res.push_back(arr[i]);
                res.push_back(-arr[i]);
            }
            else {
                res.push_back(-arr[i]);
                res.push_back(arr[i]);
            }
            s.erase(-arr[i]);
            s.erase(arr[i]);
        }
    }
    reverse(res.begin(), res.end());
    return res;
}