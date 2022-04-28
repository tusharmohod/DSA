bool checkIfStringIsRotatedByTwoPlaces(string str1, string str2){
    bool r1 = true, r2 = true;
    if(str1.length() != str2.length()) {
        return false;
    }
    int n = str1.length();
    for(int i = 0; i < n; i++) {
        int ni = (i - 2) % n;
        if(ni < 0) {
            ni += n;
        }
        
        if(str1[i] != str2[ni]) {
            r1 = false;
            break;
        }
    }
    for(int i = 0; i < n; i++) {
        int ni = (i + 2) % n;
        
        if(str1[i] != str2[ni]) {
            r2 = false;
            break;
        }
    }
    return (r1 || r2);
}