void myfun(vector<vector<int>> & r, vector<int> &c, int i, int t, int sum, vector<int> a) {
    int n = c.size();
    if (i == n) {
        return;
    }
    if (sum + c[i] == t) {
        a.push_back(c[i]);
        r.push_back(a);
        return;
    }
    if (sum + c[i] < t) {
        vector < int > a1 = a, a2 = a;
        a2.push_back(c[i]);
        myfun(r, c, i, t, sum + c[i], a2);
        myfun(r, c, i + 1, t, sum, a1);
    } else {
        myfun(r, c, i + 1, t, sum, a);
    }
}

vector<vector<int>> combinationSum(vector<int> & c, int t) {
    vector < vector < int >> r;
    int n = c.size();
    vector < int > a;
    sort(c.begin(), c.end());
    myfun(r, c, 0, t, 0, a);
    return r;
}