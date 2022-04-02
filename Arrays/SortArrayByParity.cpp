vector<int> sortArrayByParity(vector<int>& arr) {
    int e = 0;
    int o = 1;
    int n = arr.size();
    
    for(int i = 0; i < n; i++) {
        if(i % 2 == 1) {
            if(arr[i] % 2 == 0){
                while((o < n) && (arr[e] % 2 == 0)) {
                    e += 2;
                }
                std::swap(arr[i], arr[e]);
            }
        }
        else {
            if(arr[i] % 2 == 1) {
                while((e < n) && (arr[o] % 2 != 0)) {
                    o += 2;
                }
                std::swap(arr[i], arr[o]);
            }
        }
    }
    return arr;
}