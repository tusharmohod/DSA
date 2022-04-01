int findMinOperation(vector<vector<int>> matrix, int n) {
    int mxr = INT_MIN, mxc = INT_MIN, r = 0, c = 0, sum = 0, mx;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            r += matrix[i][j];
            c += matrix[j][i];
            sum += matrix[i][j];
        }
        mxr = max(mxr, r);
        mxc = max(mxc, c);
        r = 0;
        c = 0;
    }
    mx = max(mxr, mxc);
    return (mx * n) - sum;
}