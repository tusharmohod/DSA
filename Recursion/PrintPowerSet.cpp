void myFunction(vector<string> &r, string s, int i, string soFar) {
    int n = s.length();
    if(i == n) {
        r.push_back(soFar);
        return;
    }
    myFunction(r, s, i + 1, soFar);
    myFunction(r, s, i + 1, soFar + s[i]);
}

vector <string> printPowerSet(string s) {
    vector<string> r;
    int n = s.length();
    myFunction(r, s, 0, "");
    return r;
}