vector<vector<int>> spiralMatrix2(int n) {
    vector<vector<int>> res(n, vector<int>(n, 0));
    int k = 1;
    int t = 0, l = 0, r = n - 1, b = n - 1;
    while(l <= r && t <= b) {
        for(int i = l; i <= r; i++) {
            res[t][i] = k++;
        }
        t++;
        if(l > r || t > b) {
            break;
        }
        for(int i = t; i <= b; i++) {
            res[i][r] = k++;
        }
        r--;
        if(l > r || t > b) {
            break;
        }
        for(int i = r; i >= l; i--) {
            res[b][i] = k++;
        }
        b--;
        if(l > r || t > b) {
            break;
        }
        for(int i = b; i >= t; i--) {
            res[i][l] = k++;
        }
        l++;
        if(l > r || t > b) {
            break;
        }
    }
    return res;
}