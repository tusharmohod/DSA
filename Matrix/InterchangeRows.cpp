void interchangeRows(vector<vector<int>> & matrix) {
    int r = matrix.size(), c = matrix[0].size();
    for (int i = 0; i < (r / 2); i++) {
        for (int j = 0; j < c; j++) {
            swap(matrix[i][j], matrix[r - 1 - i][j]);
        }
    }
}