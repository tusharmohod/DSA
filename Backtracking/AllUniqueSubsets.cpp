void helper(vector<vector<int>> &res, vector<int> t, vector<int> &arr, int i, string out, unordered_set<string> &s) {
    int n = arr.size();
    if (i == n) {
        return;
    }
    helper(res, t, arr, i + 1, out, s);
    if (t.empty() == false) {
        if(s.find(out) == s.end()) {
            s.insert(out);
            res.push_back(t);
        }
    }
    t.push_back(arr[i]);
    out += arr[i];
    helper(res, t, arr, i + 1, out, s);
    if (t.empty() == false) {
        if(s.find(out) == s.end()) {
            s.insert(out);
            res.push_back(t);
        }
    }
}

vector<vector<int>> allUniqueSubsets(vector<int> arr, int n) {
    vector<vector<int>> res;
    vector<int> t;
    unordered_set<string> s;
    sort(arr.begin(), arr.end());
    res.push_back(t);
    for (int i = 0; i < n; i++) {
        helper(res, t, arr, i, "", s);
    }
    sort(res.begin(), res.end());
    return res;
}