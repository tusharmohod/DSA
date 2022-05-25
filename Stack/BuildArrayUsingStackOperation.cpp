vector<string> buildArrayUsingStackOperation(vector<int>& target, int n) {
    int k = 1;
    vector<string> res;
    int i = 0;
    while(i < target.size()) {
        if(k == target[i]) {
            res.push_back("Push");
            k++;
            i++;
        }
        else {
            res.push_back("Push");
            res.push_back("Pop");
            k++;
        }
    }
    return res;
}