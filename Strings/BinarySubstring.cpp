long binarySubstring(int n, string a) {
    long one = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] - '0' == 1) {
            one += 1;
        }
    }
    return (one * (one - 1)) >> 1;
}