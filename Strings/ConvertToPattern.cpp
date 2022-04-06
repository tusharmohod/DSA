string convertToPattern(string s, int numRows) {
    int n = s.length(), r = numRows;
    if (r == 1 || n == 1) {
        return s;
    }
    int c = n - 1;
    string res = s;
    char arr[r][c];
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            arr[i][j] = '*';
        }
    }
    int i = 0, j = 0, k = 0;
    bool st = true;
    while (k < n) {
        if (st) {
            for (; i < r; i++) {
                arr[i][j] = s[k++];
                if (k == n) {
                    break;
                }
            }
            st = false;
            i = r - 2;
        } else {
            j += 1;
            for (; i >= 0; i--, j++) {
                arr[i][j] = s[k++];
                if (k == n) {
                    break;
                }
            }
            i = 1;
            j -= 1;
            st = true;
        }
    }
    k = 0;
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            if (arr[i][j] != '*') {
                res[k++] = arr[i][j];
            }
        }
    }
    return res;
}