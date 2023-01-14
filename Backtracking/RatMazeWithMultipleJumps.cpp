bool isSafe(int &n, vector<int> maze[], int i, int j) {
    if (i == n - 1 && j == n - 1) {
        return true;
    }
    if (i >= n  || j >= n) {
        return false;
    }
    return maze[i][j] != 0;
}

bool solve(int &n, vector<int> maze[], vector<int> sol[], int i, int j) {
    if (n == 1 || (i == n-1 && j == n-1)) {
        sol[i][j] = 1;
        return true;
    }
    if (isSafe(n, maze, i, j) == true) {
        sol[i][j] = 1;
        int steps = maze[i][j];
        for (int k = 1; k <= steps; k++) {
            if (solve(n, maze, sol, i, j + k) == true) {
                return true;
            }
            if (solve(n, maze, sol, i + k, j) == true) {
                return true;
            }
        }
        sol[i][j] = 0;
    }
    return false;
}
void ratMazeWithMultipleJumps(int n, vector<int> maze[]) {
    vector<int> sol[n];
    for (int i = 0; i < n; i++) {
        sol[i].assign(n, 0);
    }
    bool res = solve(n, maze, sol, 0, 0);
    if (res == true) {
        print(n, sol);
    }
    else {
        cout << -1 << endl;
    }
}