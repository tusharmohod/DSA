vector<string> commonChars(vector<string>& w) {
    vector<string> r;
    vector<int> m(26,0),m1(26,0);
    for(char c:w[0]){
        m[c-'a']++;
    }
    for(int i=1;i<26;i++){
        string tw=w[i];
        for(char c:tw){
            m1[c-'a']++;
        }
        for(int j=0;j<26;j++){
            m[j]=min(m[j], m1[j]);
            m1[j]=0;
        }
    }
    for(int i=0;i<26;i++){
        while(m[i]--){
            r.push_back(string(1,(i+'a')));
        }
    }
    return r;
}