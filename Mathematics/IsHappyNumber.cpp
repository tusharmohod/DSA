bool isHappyNumber(int n) {
    int num = n, curr;
    while(true) {
        curr = 0;
        while(num > 0) {
            int rem = num % 10;
            curr += (rem * rem);
            num /= 10;
        }
        if(curr / 10 == 0) break;
        num = curr;
    }
    return curr == 1 || curr == 7;
}