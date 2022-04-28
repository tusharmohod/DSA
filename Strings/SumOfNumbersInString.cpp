int sumOfNumbersInString(string str) {
    int n = str.length();
    int num = 0;
    int res = 0;
    for(int i = 0; i < n; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            num = (num * 10) + (str[i] - '0');
        }
        else {
            res += num;
            num = 0;
        }
    }
    if(num > 0) {
        res += num;
    }
    return res;
}