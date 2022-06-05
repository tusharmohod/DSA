string convertToBase7(int num) {
    string res = "";
    bool s = true;
    if(num == 0) return "0";
    if(num < 0) {
        num = -num;
        s = false;
    }
    while(num > 0) {
        int rem = num % 7;
        res += char(rem + '0');
        num /= 7;
    }
    int l = 0;
    int r = res.size() - 1;
    while(l < r) {
        swap(res[l++], res[r--]);
    }
    return (s) ? res : "-"+res;
}