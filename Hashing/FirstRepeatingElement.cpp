int firstRepeatingElement(int arr[], int n) {
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) {
        mp[arr[i]] += 1;
    }
    for(int i = 0; i < n; i++) {
        auto itr = mp.find(arr[i]);
        if(itr != mp.end() && itr->second > 1) {
            return i + 1;
        }
    }
    return -1;
}