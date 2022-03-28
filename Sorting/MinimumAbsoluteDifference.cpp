vector<vector<int>> minimumAbsoluteDifference(vector<int>& arr) {
    vector<vector<int>> r;
    vector<int> cr;
    sort(arr.begin(), arr.end());
    int mn = INT_MAX;
    for(int i = 1; i <arr.size(); i++) {
        if(abs(arr[i] - arr[i-1]) < mn) {
            mn = abs(arr[i]-arr[i-1]);
            r.clear();
        }
        if(abs(arr[i]-arr[i-1]) == mn) {
            cr.push_back(arr[i-1]);
            cr.push_back(arr[i]);
            r.push_back(cr);
            cr.clear();
        }
    }
    return r;
}