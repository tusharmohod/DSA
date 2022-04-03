int MaximumCandiesAllocatedToKChildren(vector<int>& candies, long long k) {
    int r = INT_MIN;
    for(int i = 0; i < candies.size(); i++){
        r=max(r, candies[i]);
    }
    long long l = 1;
    long long res = 0;
    while(l <= r){
        long long m = l +((r - l) >> 1);
        long long count = 0;
        for(int i = 0; i < candies.size(); i++){
            count += (candies[i] / m);
        }
        if(count >= k){
            res = m;
            l = m + 1;
        }
        else {
            r = m - 1;
        }            
    }
    return res;
}