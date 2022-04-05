void gp(vector<string> &r, int i, int n, int ob, int cb, string o) {
    if(i == 2*n) {
        r.push_back(o);
        return;
    }
    if(ob < n) {
        gp(r, i+1, n, ob+1, cb+1, o+"(");
    }
    if(cb > 0) {
        gp(r, i+1, n, ob, cb-1, o+")");
    }
}

vector<string> generateParenthesis(int n) {
    vector<string> r;
    gp(r, 0, n, 0, 0, "");
    return r;
}