int copySetBitInARange(int a, int b, int l, int r) {
    l = min(l, log(a)/log(2));
    int x = ((1 << (r - l + 1)) - 1) << (l - 1);
    x = a & x;
    b = b | x;
    return b;
}