bool checkIfEveryRowColContainsAllNumbers(vector<vector<int>>& matrix) {
    int n = matrix.size();
    unordered_set<int> mp;
    for(int i = 0; i < n; i++){
        mp.clear();
        for(int j = 0; j < n; j++){
            mp.insert(matrix[i][j]);
        }
        if(mp.size() != n) {
            return false;
        }
    }
    for(int j = 0; j < n; j++){
        mp.clear();
        for(int i = 0; i < n; i++){
            mp.insert(matrix[i][j]);
        }
        if(mp.size() != n) {
            return false;
        }
    }
    return true;
}