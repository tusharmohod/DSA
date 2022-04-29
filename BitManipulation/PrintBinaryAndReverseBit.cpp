void printBinaryAndReverseBits(int n) {
    bool flag = false;
    int r = 0, p = 0;
    for (int i = 31; i >= 0; i--) {
        if (flag) {
            if ((n & (1 << i)) != 0) {
                cout << "1";
                r = r | (1 << p);
            }
            else {
                cout << "1";
            }
            p++;
        }
        else {
            if ((n & (1 << i)) != 0) {
                flag = true;
                cout << "1" ;
                r = r | (1 << p);
                p++;
            }
        }
    }
    cout << endl;
    cout << r << endl;
}