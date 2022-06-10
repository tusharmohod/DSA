int maxNumberOfBalloons(string text) {
    unordered_map<char, int> mp;
    for(int i = 0; i < text.size(); i++) {
        mp[text[i]]++;
    }
    int x = 0;
    for(auto e : mp) {
        if(e.first == 'b') {
            x = e.second;
            break;
        }
    }
    if(x == 0) return 0;
    for(auto e : mp) {
        if((e.first == 'a' || e.first == 'n') && e.second < x) {
            x = min(x, e.second);
        }
        else if((e.first == 'l' || e.first == 'o') && e.second < x * 2) {
            x = min(x, e.second / 2);
        }
    }
    return x;
}