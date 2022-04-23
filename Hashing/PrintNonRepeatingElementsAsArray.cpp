vector<int> printNonRepeatingElementsAsArray(int arr[],int n) {
    unordered_map<int, int> freq;
    vector<int> res;
    for(int i = 0; i < n; i++) {
        freq[arr[i]] += 1;
    }
    for(int i = 0; i < n; i++) {
        auto itr = freq.find(arr[i]);
        if(itr != freq.end() && itr->second == 1) {
            res.push_back(itr->first);
            itr->second -= 1;
        }
    }
    return res;
}