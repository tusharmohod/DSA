string caseSpecificSortingOfString(string str, int n) {
    int count[256] = {0};
    int i = 'a';
    int j = 'A';
    for(int k = 0; k < str.size(); k++) {
        count[str[k]]++;
    }
    for(int k = 0; k < str.size(); k++) {
        if(str[k] >= 'a' && str[k] <= 'z') {
            while(count[i] == 0) {
                i++;
            }
            str[k] = char(i);
            count[i]--;
        }
        else {
            while(count[j] == 0) {
                j++;
            }
            str[k] = char(j);
            count[j]--;
        }
    }
    return str;
}