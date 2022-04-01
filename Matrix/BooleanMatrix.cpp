void myFunc(vector<vector<int>>& matrix, int i, int j, bool up, bool down, bool left, bool right) {
    int r = matrix.size(), c = matrix[0].size();
    if (up) {
        for (; i >= 0; i--) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = -1;
            }
        }
    } else if (down) {
        for (; i < r; i++) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = -1;
            }
        }
    } else if (left) {
        for (; j < c; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = -1;
            }
        }
    } else if (right) {
        for (; j >= 0; j--) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = -1;
            }
        }
    }
}

void booleanMatrix(vector<vector<int>>& matrix) {
    int r = matrix.size(), c = matrix[0].size();
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (matrix[i][j] == 1) {
                myFunc(matrix, i - 1, j, true, false, false, false);
                myFunc(matrix, i + 1, j, false, true, false, false);
                myFunc(matrix, i, j + 1, false, false, true, false);
                myFunc(matrix, i, j - 1, false, false, false, true);
            }
        }
    }
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            matrix[i][j] = abs(matrix[i][j]);
        }
    }
}