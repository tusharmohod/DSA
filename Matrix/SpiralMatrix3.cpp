bool isValid(int i, int j, int r, int c) {
    return !(i < 0 || j < 0 || i >= r || j >= c); 
}

vector<vector<int>> spiralMatrix3(int r, int c, int rs, int cs) {
    int tn = r * c;
    vector<vector<int>> ans;
    ans.push_back({rs, cs});
    int len = 1;
    while(ans.size() < tn) {
        for(int i = 1; i <= len; i++) {
            if(isValid(rs, cs + i, r, c)) {
                ans.push_back({rs, cs + i});
            }
        }
        cs += len;
        for(int i = 1; i <= len; i++) {
            if(isValid(rs + i, cs, r, c)) {
                ans.push_back({rs + i, cs});
            }
        }
        rs += len;
        len++;
        for(int i = 1; i <= len; i++) {
            if(isValid(rs, cs - i, r, c)) {
                ans.push_back({rs, cs - i});
            }
        }
        cs -= len;
        for(int i = 1; i <= len; i++) {
            if(isValid(rs - i, cs, r, c)) {
                ans.push_back({rs - i, cs});
            }
        }
        rs -= len;
        len++;
    }
    return ans;
}