string digitSum(string s, int k) {
    string c;
    while(s.size() > k) {
        c = "";
        for(int i = 0; i < s.size(); i = i + k) {
            string st = s.substr(i, k);
            int sum = 0;
            for(int j = 0; j < st.size(); j++) {
                sum += (st[j] - '0');
            }
            c += to_string(sum);
        }
        s = c;
    }
    return s;
}