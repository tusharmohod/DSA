bool isPerfectSquare(int num) {
    int l = 1, r = num >> 1;
    if (num == 1) return 1;
    int ans = 0;
    while (l <= r) {
        int m = (l + r) >> 1;
        if ((long long) m * m == num) {
            ans = m;
            break;
        } else if ((long long) m * m < num) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return (ans != 0);
}