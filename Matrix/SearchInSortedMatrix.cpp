bool searchMatrix(vector < vector < int >> & matrix, int target) {
    int r = matrix.size(), c = matrix[0].size();
    if (r == 1) {
        for (int k = 0; k < c; k++) {
            if (matrix[0][k] == target) {
                return true;
            }
        }
        return false;
    } else if (c == 1) {
        for (int k = 0; k < r; k++) {
            if (matrix[k][0] == target) {
                return true;
            }
        }
        return false;
    } else {
        int i = 0, j = c - 1;
        while (i < r && j >= 0) {
            if (matrix[i][j] == target) {
                return true;
            } else if (matrix[i][j] > target) {
                j--;
            } else {
                i++;
            }
        }
    }
    return false;
}