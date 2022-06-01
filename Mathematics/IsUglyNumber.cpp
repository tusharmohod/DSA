bool isUglyNumber(int n) {
    if(n <= 0) return false;
    if(n == 1) return true;
    int t;
    while(n != 1) {
        t = n;
        if(n % 2 == 0) n = n / 2;
        if(n % 3 == 0) n = n / 3;
        if(n % 5 == 0) n = n / 5;
        if(t == n) return false;
    }
    return true;
}