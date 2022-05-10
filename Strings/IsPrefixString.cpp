bool isPrefixString(string s, vector<string>& words) {
    string f = "";
    int i = 0;
    while(f.size() < s.size()) {
        f += words[i++];
        if(s.find(f) != 0) {
            return false;
        }
        if(i == words.size()) {break;}
    }
    return (f.size() == s.size() && s.find(f) == 0);
}