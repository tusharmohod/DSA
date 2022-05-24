int divisorSubstrings(int num, int k) {
    string n = "";
    int res = 0;
    int x = num;
    while(num > 0) {
        int rem = num % 10;
        n = char(rem + '0') + n;
        num /= 10;
    }
    for(int i = 0; (i + k - 1) < n.size(); i++) {
        int n1  = 0;
        for(int j = 0; j < k; j++) {
            n1 = (n1 * 10) + (n[i + j] - '0');
        }
        if(n1 != 0 && x % n1 == 0) {
            res++;
        }
    }
    return res;
}