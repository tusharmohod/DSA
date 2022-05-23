int largestInteger(int num) {
    int count[10] = {0};
    string st = to_string(num);
    for(int i = 0; i < st.size(); i++) {
        count[st[i] - '0']++;
    }
    int oi = 9;
    int ei = 8;
    for(int i = 0; i < st.size(); i++) {
        if((st[i] - '0') % 2 == 0) {
            while(ei >= 0 && count[ei] == 0) {
                ei = ei - 2;
            }
            if(ei >= 0) {
                st[i] = char(ei + '0');
                count[ei]--;
            }
        }
        else {
            while(oi >= 0 && count[oi] == 0) {
                oi = oi - 2;
            }
            if(oi >= 0) {
                st[i] = char(oi + '0');
                count[oi]--;
            }
        }
    }
    int res = stoi(st);
    return res;