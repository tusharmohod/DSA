void booleanMatrix(vector<vector<int>> & matrix) {
    int r = matrix.size(), c = matrix[0].size();

    vector<bool> rows(r, false);
    vector<bool> cols(c, false);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == 1) {
                rows[i] = true;
                cols[j] = true;
            }
        }
    }

    for (int i = 0; i < r; i++) {
        if (rows[i]) {
            for (int j = 0; j < c; j++) {
                matrix[i][j] = 1;
            }
        }
    }

    for (int j = 0; j < c; j++) {
        if (cols[j]) {
            for (int i = 0; i < r; i++) {
                matrix[i][j] = 1;
            }
        }
    }
}