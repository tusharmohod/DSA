class RangeSumQuery2DImmutable {
    public:
    vector<vector<int>> res;
    int r;
    int c;
    RangeSumQuery2DImmutable(vector<vector<int>>& matrix) {
        r = matrix.size();
        c = matrix[0].size();
        res.resize(r, vector<int>(c));
        for(int i = 0; i < r; i++) {
            for(int j = 0; j < c; j++) {
                if(j == 0) {
                    res[i][j] = matrix[i][j];
                }
                else {
                    res[i][j] = res[i][j-1] + matrix[i][j];
                } 
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum = 0;
        for(int i = row1; i <= row2; i++) {
            if(col1 == 0) {
                sum += res[i][col2];
            }
            else {
                sum += res[i][col2] - res[i][col1-1];   
            }
        }
        return sum;
    }
};