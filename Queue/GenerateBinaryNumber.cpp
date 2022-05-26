vector<string> generateBinaryNumber(int N) {
    vector<string> res;
    queue<string> q;
    q.push("1");
    for(int i = 0; i < N; i++) {
        string t = q.front();
        res.push_back(t);
        q.pop();
        q.push(t + "0");
        q.push(t + "1");
    }
    return res;
}