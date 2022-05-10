int isPrefixOfWord(string sentence, string searchWord) {
    int res = 0;
    string s = "";
    for(int i = 0; i < sentence.size(); i++) {
        if(sentence[i] != ' ') {
            s += sentence[i];
        }
        else {
            res++;
            if(s.find(searchWord) == 0) {
                return res;
            }
            s = "";
        }
    }
    res++;
    if(s.find(searchWord) == 0) {
        return res;
    }
    return -1;
}