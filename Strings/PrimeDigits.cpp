int primeDigits(int n) {
    string r = "";
    char arr[] = {'2', '3', '5', '7'};
    while(n > 0) {
        int rem = n % 4;
        n = n / 4;
        if(rem == 0) {
            r = arr[3] + r;
            n -= 1;
        }
        else {
            r = arr[rem - 1] + r;
        }
    }
    return stoi(r);
}