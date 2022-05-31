string intToHexadecimal(int num) {
    string res = "";
    if(num == 0) {
        return "0";
    }
    unsigned int n = num;
    while(n > 0) {
        int rem = n % 16;
        if(rem < 10) {
            res += (rem + '0');
        }
        else {
            res += ('a' + rem - 10);
        }
        n = n / 16;
    }
    int l = 0, r = res.size()-1;
    while(l < r) {
        swap(res[l++], res[r--]);
    }
    return res;
}