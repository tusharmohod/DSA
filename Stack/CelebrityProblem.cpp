int celebrityProblem(vector<vector<int> >& M, int n) {
    stack<int> s;
    for(int i = 0; i < n; i++) {
        s.push(i);
    }
    while(s.size() > 1) {
        int i = s.top();
        s.pop();
        int j = s.top();
        s.pop();
        if(M[i][j] == 1) {
            s.push(j);
        }
        else {
            s.push(i);
        }
    }
    int pc = s.top();
    s.pop();
    for(int i = 0; i < n; i++) {
        if(i != pc) {
            if(M[i][pc] == 0 || M[pc][i] == 1) {
                return -1;
            }
        }
    }
    return pc;
}