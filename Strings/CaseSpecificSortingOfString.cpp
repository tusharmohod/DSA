string caseSpecificSortingOfString(string str, int n) {
    map<char, int> lc;
    map<char, int> uc;
    string res = "";
    
    for(int i = 0; i < n; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            lc[str[i]] += 1;
        }
        else {
            uc[str[i]] += 1;
        }
    }
    
    for(int i = 0; i < n; i++) {
        if(str[i] >= 'a' && str[i] <= 'z') {
            auto it = lc.begin();
            res = res + it->first;
            it->second -= 1;
            if(it->second == 0) {
                lc.erase(it);
            }
        }
        else {
            auto it = uc.begin();
            res = res + it->first;
            it->second -= 1;
            if(it->second == 0) {
                uc.erase(it);
            }
        }
    }
    
    return res;
}