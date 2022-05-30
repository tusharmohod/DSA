int thirdMax(vector<int>& nums) {
    long mx[3];
    long base = (long)INT_MIN - 1;
    fill(mx, mx+3, base);
    for(int i : nums) {
        if(i > mx[0]) {
            mx[2] = mx[1];
            mx[1] = mx[0];
            mx[0] = i;
        }
        else if(i != mx[0] && i > mx[1]) {
            mx[2] = mx[1];
            mx[1] = i;
        }
        else if(i != mx[0] && i != mx[1] && i > mx[2]) {
            mx[2] = i;
        }
    }
    bool f = false;
    for(int i = 2; i >= 0; i--) {
        if(mx[i] == base) {
            f = true;
            break;
        }
    }
    return f ? mx[0] : mx[2];
}