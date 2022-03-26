int printRightMostSetBit(int n) {
    int r = n & -n;
    // r = n & (~x + 1); 
    return r;
}