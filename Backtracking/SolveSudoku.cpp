bool isSafe(int grid[N][N], int i, int j, int num) {
    for (int k = 0; k < N; k++) {
        if (grid[k][j] == num || grid[i][k] == num) {
            return false;
        }
    }
    
    int row = i - (i % 3);
    int col = j - (j % 3);
    
    for (int i1 = row; i1 < (row + 3); i1++) {
        for (int j1 = col; j1 < (col + 3); j1++) {
            if(grid[i1][j1] == num) {
                return false;
            }
        }
    }
    
    return true;
}


bool solveSudoku(int grid[N][N]) {
    bool isSolved = true;
    int i = 0, j = 0;
    
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            if (grid[i][j] == 0) {
                isSolved = false;
                break;
            }
        }
        if (isSolved == false) {
            break;
        }
    }

    if (isSolved == true) {
        return true;
    }
    
    for (int num = 1; num <= N; num++) {
        if (isSafe(grid, i, j, num) == true) {
            grid[i][j] = num;
            if (SolveSudoku(grid) == true) {
                return true;
            }
            grid[i][j] = 0;
        }
    }
    return false;
}

void printGrid (int grid[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j] << " ";
        }
    }
}