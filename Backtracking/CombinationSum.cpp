void helper(vector<vector<int>> &res, vector<int> t, vector<int> &arr, int i, int b) {
    int n = arr.size();
    int newB = b - arr[i];
    if (newB < 0) {
        return;
    }
    if (newB == 0) {
        t.push_back(arr[i]);
        res.push_back(t);
        return;
    }
    t.push_back(arr[i]);
    for (int j = i; j < arr.size(); j++) {
        if (j > 0 && arr[j] == arr[j - 1]) {
            continue;
        }
        helper(res, t, arr, j, newB);
    }
}

vector<vector<int>> combinationSum(vector<int> &A, int B) {
    vector<vector<int>> res;
    vector<int> temp;
    int n = A.size();
    sort(A.begin(), A.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && A[i] == A[i - 1]) {
            continue;
        }
        helper(res, temp, A, i, B);
        temp.clear();
    }
    return res;
}