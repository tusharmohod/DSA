bool ransomNote(string ransomnote, string magazine) {
    int count[26] = {0};
    for(char c : ransomnote) {
        count[c - 'a']--;
    }
    for(char c : magazine) {
        count[c - 'a']++;
    }
    for(int i = 0; i < 26; i++) {
        if(count[i] < 0) {
            return false;
        }
    }
    return true;
}