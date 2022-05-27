vector<int> processQueries(vector<int>& queries, int m) {
    list<int> l;
    vector<int> res(queries.size());
    for(int i = 0; i < m; i++) {
        l.push_back(i+1);
    }
    for(int i = 0; i < queries.size(); i++) {
        int j = 0;
        for(int e : l) {
            if(e == queries[i]) {
                l.remove(queries[i]);
                l.emplace_front(queries[i]);
                res[i] = j;
                break;
            }
            j++;
        }
    }
    return res;
}