int compareVersionNumbers(string v1, string v2) {
    int i = 0;
    int j = 0;
    int l1 = v1.size();
    int l2 = v2.size();
    while(i < l1 || j < l2) {
        int ver1 = 0;
        while(i < l1 && v1[i] != '.') {
            ver1 = (ver1 * 10) + (v1[i] - '0');
            i++;
        }
        int ver2 = 0;
        while(j < l2 && v2[j] != '.') {
            ver2 = (ver2 * 10) + (v2[j] - '0');
            j++;
        }
        if(ver1 > ver2) return 1;
        if(ver1 < ver2) return -1;
        i++;
        j++;
    }
    return 0;
}