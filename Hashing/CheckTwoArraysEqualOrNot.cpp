bool checkTwoArraysEqualOrNot(vector<ll> A, vector<ll> B, int N) {
    unordered_map<ll, ll> a, b;
    for(int i = 0; i < N; i++) {
        a[A[i]] += 1;
        b[B[i]] += 1;
    }
    for(auto e : a) {
        auto itr = b.find(e.first);
        if(itr != b.end() && e.second != itr->second) {
            return false;
        }
        else if(itr == b.end()) {
            return false;
        }
    }
    return true;
}