string previousNumberInAtmostOneSwap(string S){
    int n = S.length();
    int i1 = -1, i2 = -1;
    for(int i = n - 2; i >= 0; i--) {
        if((S[i + 1]) < (S[i])) {
            i1 = i;
            break;
        }
    }
    if(i1 == -1) {
        return "-1";
    }
    for(int i = n - 1; i > i1; i--) {
        if((S[i]) < (S[i1])) {
            while(S[i] == S[i - 1]) {
                i--;
            }
            i2 = i;
            break;
        }
    }
    
    if(i2 == -1) {
        return "-1";
    }
    swap(S[i1], S[i2]);
    
    if(S[0] == '0') {
        return "-1";
    }
    return S;
}