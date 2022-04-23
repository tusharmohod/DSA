static bool comp(pair<int, int> a, pair<int, int> b) {
    if(a.second != b.second) {
        return a.second > b.second;
    }
    else {
        return a.first < b.first;
    }
}

vector<int> sortElementOfArrayByFrequency(int arr[],int n) {
    unordered_map<int, int> m;
    vector<pair<int, int>> v;
    vector<int> res;
    for(int i = 0; i < n; i++) {
        m[arr[i]] += 1;
    }
    for(auto it = m.begin(); it != m.end(); it++) {
        v.push_back({it->first, it->second});
    }
    sort(v.begin(), v.end(), comp);
    for(int i = 0; i < v.size(); i++) {
        for(int j = 0; j < v[i].second; j++) {
            res.push_back(v[i].first);
        }
    }
    return res;
}