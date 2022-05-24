vector<vector<int>> reshapeTheMatrix(vector<vector<int>>& mat, int r, int c) {
    int m = mat.size();
    int n = mat[0].size();
    if(m * n != r * c) {
        return mat;
    }
    vector<vector<int>> res(r, vector<int>(c));
    int ii = 0, jj = 0;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            res[ii][jj++] = mat[i][j];
            if(jj == c) {
                ii++;
                jj = 0;
            }
        }
    }
    return res;
}