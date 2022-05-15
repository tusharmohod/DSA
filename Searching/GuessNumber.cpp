int guessNumber(int n) {
    long l = 1, r = n, res, mid;
    while(l <= r) {
        mid = (l + r) >> 1;
        if(guess(mid) == 0) {
            return mid;
        }
        else if(guess(mid) == -1) {
            r = mid -1;
        }
        else {
            l = mid + 1;
        }
    }
    return 0;
}