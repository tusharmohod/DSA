vector<int> factorialOfLargeNumber(int N) {
    vector<int> res;
    int ans, rem, carry = 0;
    res.push_back(1);
    for(int i = 2; i <= N; i++) {
        carry = 0;
        for(int j = 0; j < res.size(); j++) {
            ans = carry + (i * res[j]);
            res[j] = ans % 10;
            carry = ans / 10;
        }
        while(carry) {
            rem = carry % 10;
            res.push_back(rem);
            carry /= 10;
        }
    }
    reverse(res.begin(), res.end());
    return res;
}