vector<vector<int>> matrixMultiplication(const vector<vector<int>> & A, const vector<vector<int>> & B) {
    vector < vector < int >> r;
    int r1 = A.size(), c1 = A[0].size(), r2 = B.size(), c2 = B[0].size();
    if (c1 != r2) {
        return r;
    }
    for (int i = 0; i < r1; i++) {
        vector < int > t;
        for (int j = 0; j < c2; j++) {
            int s = 0;
            for (int k = 0; k < r2; k++) {
                s += A[i][k] * B[k][j];
            }
            t.push_back(s);
        }
        r.push_back(t);
    }
    return r;
}