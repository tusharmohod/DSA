string shuffleString(string s, vector<int>& indices) {
    string res = s;
    for(int j = 0; j < indices.size(); j++) {
        res[indices[j]] = s[j];
    }
    return res;
}