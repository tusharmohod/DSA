string reformatDate(string date) {
    unordered_map<string, string> mon;
    mon["Jan"] = "01";
    mon["Feb"] = "02";
    mon["Mar"] = "03";
    mon["Apr"] = "04";
    mon["May"] = "05";
    mon["Jun"] = "06";
    mon["Jul"] = "07";
    mon["Aug"] = "08";
    mon["Sep"] = "09";
    mon["Oct"] = "10";
    mon["Nov"] = "11";
    mon["Dec"] = "12";
    string d = "";
    string m = "";
    string y = "";
    date += ' ';
    int it = 0;
    for(int i = 0; i < date.size(); i++) {
        if(date[i] == ' ') {
            it++;
        }
        else if(it == 0) {
            while(date[i] >= '0' && date[i] <= '9') {
                d += date[i];
                i++;
            }
            i++;
            if(d.size() == 1) {
                d = '0' + d;
            }
        }
        else if(it == 1) {
            string mn = ""; 
            while(date[i] != ' ') {
                mn += date[i];
                i++;
            }
            i--;
            m += mon[mn];
        }
        else if(it == 2) {
            if(date[i] >= '0' && date[i] <= '9') {
                y += date[i];
            }
        }
    }
    return y+"-"+m+"-"+d;
}