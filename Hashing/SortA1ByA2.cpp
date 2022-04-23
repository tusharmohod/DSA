vector<int> sortA1ByA2(vector<int> A1, int N, vector<int> A2, int M) {
    unordered_map<int, int> freq;
    int k = 0;
    vector<int> res(N, 0);
    for(int i = 0; i < N; i++) {
        freq[A1[i]] += 1;
    }
    for(int i = 0; i < M; i++) {
        auto it = freq.find(A2[i]); 
        if(it != freq.end()) {
                while(it->second--) {
                    res[k++] = it->first;
                }
        }
    }
    sort(A1.begin(), A1.end());
    freq.clear();
    for(int i = 0; i < M; i++) {
        freq[A2[i]] += 1;
    }
    for(int i = 0; i < N; i++) {
        if(freq.find(A1[i]) == freq.end()) {
            res[k++] = A1[i];
        }
    }
    return res;
} 