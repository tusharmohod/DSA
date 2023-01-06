bool isSafe(bool graph[101][101], vector<int> &colref, int index, int col) {
    int n = colref.size();
    
    for (int i = 0; i < n; i++) {
        if (index != i && graph[index][i] == 1 && colref[i] == col) {
            return false;
        }
    }
    
    return true;
}

bool solve(bool graph[101][101], vector<int>& colref, int index, int m, int n) {
    if (index == n) {
        return true;
    }
    
    for (int col = 1; col <= m; col++) {
        if (isSafe(graph, colref, index, col) == true) {
            colref[index] = col;
            if (solve(graph, colref, index + 1, m, n) == true) {
                return true;
            }
            colref[index] = 0;
        }
    }
    
    return false;
}

bool mColoring(bool graph[101][101], int m, int n) {
    vector<int> colref(n, 0);
    return solve(graph, colref, 0, m, n);
}