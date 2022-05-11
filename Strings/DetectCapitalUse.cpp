bool detectCapitalUse(string word) {
    bool f = isupper(word[0]);
    if(f == false && isupper(word[1])) {
        return false;
    }
    for(int i = 2; i < word.size(); i++) {
        if(isupper(word[i]) == islower(word[i - 1]) || isupper(word[i-1]) == islower(word[i])) {
            return false;
        }
    }
    return true;
}