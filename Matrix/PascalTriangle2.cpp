vector<int> pascalTriangle2(int rowIndex) {
    if(rowIndex == 0) {
        return vector<int>({1});
    }
    if(rowIndex == 1) {
        return vector<int>({1, 1});
    }
    vector<int> res(rowIndex + 1, 1);
    for(int i = 1; i < res.size(); i++) {
        res[i] = ((long long)res[i - 1] * (rowIndex + 1 - i)) / (i);
    }
    return res;
}