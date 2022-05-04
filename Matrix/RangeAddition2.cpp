int rangeAddition2(int m, int n, vector<vector<int>>& ops) {
    int x = m;
    int y = n;
    int mn = x * y;
    for(int i = 0; i < ops.size(); i++) {
        x = min(x, ops[i][0]);
        y = min(y, ops[i][1]);
        mn = min(mn, x * y);
    }
    return mn;
}