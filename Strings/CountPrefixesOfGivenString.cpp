int countPrefixesOfGivenString(vector<string>& words, string s) {
    int res = 0;
    for(int i = 0; i < words.size(); i++) {
        if(s.find(words[i]) == 0) {
            res++;
        }
    }
    return res;
}