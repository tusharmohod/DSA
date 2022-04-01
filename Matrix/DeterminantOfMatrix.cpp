int determinantOfMatrix(vector<vector<int>> & matrix, int n) {
    if (n == 1) {
        return matrix[0][0];
    }
    if (n == 2) {
        return (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    }
    int det = 0;
    vector<vector<int>> m(10, vector<int>(10, 0));
    int subi, subj;
    for (int x = 0; x < n; x++) {
        subi = 0;
        for (int i = 1; i < n; i++) {
            subj = 0;
            for (int j = 0; j < n; j++) {
                if (j == x) {
                    continue;
                }
                m[subi][subj] = a[i][j];
                subj++;
            }
            subi++;
        }
        det += pow(-1, x) * matrix[0][x] * determinantOfMatrix(m, n - 1);
    }
    return det;
}