bool checkPerfectNumber(int num) {
    int sum = 0;
    if(num == 1) return false;
    for(int i = 2; i*i < num; i++) {
        int rem = num % i;
        if(rem == 0) {
            sum += i;
            if(rem != num / i) {
                sum += (num / i);
            }
        }
    }
    sum += 1;
    return sum == num;
}