int divideWithoutDivisonModulo(int dividend, int divisor) {
    long int r = 0;
    bool sign;
    if(dividend == INT_MIN && divisor == -1) {
        return INT_MAX;
    }
    sign = ((dividend >= 0) == (divisor >= 0)) ? true : false;
    
    long int a = abs(dividend);
    long int b = abs(divisor);
    
    while((a - b) >= 0) {
        long int x = 0;
        while (a >= (b << x)) {
            x++;
        }
        r += (1 << (x - 1));
        a -= (b << (x - 1));
    }
    return sign ? r : -r;
}