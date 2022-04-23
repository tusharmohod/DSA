vector<string> winner(string arr[],int n) {
    unordered_map<string, int> m;
    vector<string> res;
    string name = "";
    string votes = "";
    for(int i = 0; i < n; i++) {
        m[arr[i]] += 1;
    }
    int mx = 0;
    for(auto e : m) {
        mx = max(mx, e.second);
    }
    for(int i = 0; i < n; i++) {
        auto it = m.find(arr[i]);
        if(it != m.end() && it->second == mx) {
            if(name == "") {
                name = it->first;
            }
            else {
                name = min(name, it->first);
            }
        }
    }
    votes = std::to_string(mx);
    return vector<string>{name, votes};
}