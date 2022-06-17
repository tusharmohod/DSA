vector<string> keyboardRow(vector<string>& words) {
    int count[26] = {1, 2, 2, 1, 0, 1, 1, 1, 0, 1, 1, 1, 2, 
                     2, 0, 0, 0, 0, 1, 0, 0, 2, 0, 2, 0, 2};
    vector<string> res;
    for(string st : words) {
        int index = count[tolower(st[0]) - 'a'];
        for(int i = 1; i < st.size(); i++) {
            if(index != count[tolower(st[i]) - 'a']) {
                index = -1;
                break;
            }
        }
        if(index != -1) {
            res.push_back(st);
        }
    }
    return res;
}