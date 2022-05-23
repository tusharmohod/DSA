string removeDigit(string number, char digit) {
    string res = "", curr = "";
    for(int i = 0; i < number.size(); i++) {
        if(number[i] == digit) {
            curr = number;
            curr.erase(i,1);
            res = max(res, curr);
        }
    }
    return res;
}