int xa[8] = {-1,1,0,0,-1,-1,1,1};
int ya[8] = {0,0,-1,1,-1,1,-1,1};

int getLiveNeighbors(vector<vector<int>> &board, int i, int j) {
    int c = 0;
    for (int k = 0; k < 8; k++) {
        int x = i + xa[k];
        int y = j + ya[k];
        if ((x >= 0 && x < board.size()) && (y >= 0 && y < board[0].size())) {
            if (board[x][y] == 1 || board[x][y] == 2) {
                c++;
            }
        }
    }
    return c;
}

void gameOfLife(vector<vector<int>> &board) {
    int m = board.size();
    int n = board[0].size();
    vector < int > rs(m, 0), cs(n, 0);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int c = getLiveNeighbors(board, i, j);
            if (board[i][j] == 0) {
                if (c == 3) {
                    board[i][j] = 3;
                }
            } else if (board[i][j] == 1) {
                if (c < 2 || c > 3) {
                    board[i][j] = 2;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            board[i][j] %= 2;
        }
    }
}