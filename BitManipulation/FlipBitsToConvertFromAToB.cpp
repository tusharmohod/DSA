int flipBitsToConvertFromAToB(int a, int b) {
    int x = a ^ b;
    int r = 0;
    while(x > 0) {
        x= x & (x - 1);
        r++;
    }
    return r;
}