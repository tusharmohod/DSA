int noThreeConsecutiveSameCharacters(string a) {
    int res = 0;
    int count = 1;
    for(int i = 1; i < a.size(); i++) {
        if(a[i] == a[i - 1]) {
            if(count == 2) {
                res += 1;
                count = 1;
            }
            else {
                count += 1;
            }
        }
        else {
            count = 1;
        }
    }
    return res;
}