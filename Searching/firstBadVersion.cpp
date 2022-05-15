int firstBadVersion(int n) {
    long long int l = 1, r = n;
    int ans;
    while(l <= r) {
        int m = (l + r) >> 1;
        if(isBadVersion(m)) {
            ans = m;
            r = m - 1;
        }
        else {
            l = m + 1;
        }
    }
    return ans;
}