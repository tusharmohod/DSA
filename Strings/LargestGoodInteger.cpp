string largestGoodInteger(string num) {
    string res = "";
    string curr = "";
    curr += num[0];
    for(int i = 1; i < num.size(); i++) {
        if(num[i-1] == num[i]) {
            curr += num[i];
        }
        else {
            curr = num[i];
        }
        if(curr.size() == 3) {
            res = max(res, curr);
            curr = "";
        }
    }
    
    return (res.size() == 3) ? res : "";
}