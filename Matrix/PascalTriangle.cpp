vector<vector<int>> pascalTriangle(int numRows) {
    vector<vector<int>> res;
    for(int i = 0; i < numRows; i++) {
        vector<int> curr;
        for(int j = 0; j < i + 1; j++) {
            if(j == 0 || j == i) {
                curr.push_back(1);
            }
            else {
                curr.push_back(res[i - 1][j - 1] + res[i - 1][j]);
            }
        }
        res.push_back(curr);
    }
    return res;
}