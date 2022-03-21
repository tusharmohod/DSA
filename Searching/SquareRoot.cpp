int squareRoot(long x) {
    long s = 1;
    long e = x;
    long m = 0;
    long msq = 1;
    long res = 0;
    while(s <= e) { 
        m = (s + e) / 2;
        msq = m * m;
        if(msq == x) {
            return m;
        }
        else if(msq > x) {
            e = m - 1;
        }
        else if(msq < x) {
            s = m + 1;
            res = m;
        }
    }
    return res;
}