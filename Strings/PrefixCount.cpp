int prefixCount(vector<string>& words, string pref) {
    int res = 0;
    for(string w : words) {
        if(w.find(pref) == 0) {
            res++;
        }
    }
    return res;
}