vector<int> intersectionofTwoArrays(vector<int>& n1, vector<int>& n2) {
    vector<int> res;
    unordered_set<int> s;
    for(int i = 0; i < n1.size(); i++) {
        s.insert(n1[i]);
    }
    for(int i = 0; i < n2.size(); i++) {
        auto it = s.find(n2[i]);
        if(it != s.end()) {
            res.push_back(n2[i]);
            s.erase(it);
        }
    }
    return res;
}