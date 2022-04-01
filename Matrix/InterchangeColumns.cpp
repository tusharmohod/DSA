void interchangeColumns(vector<vector<int>> & matrix) {
    int r = matrix.size(), c = matrix[0].size();
    for (int j = 0; j < (c / 2); j++) {
        for (int i = 0; i < r; i++) {
            swap(matrix[i][j], matrix[i][c - 1 - j]);
        }
    }
}