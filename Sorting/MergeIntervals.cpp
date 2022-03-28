vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
    vector<vector<int>> res;
    sort(intervals.begin(), intervals.end());
    int l = intervals[0][0], r = intervals[0][1];
    for(int i = 1; i < intervals.size(); i++){
        if(intervals[i][0] <= r) {
            l = min(l,intervals[i - 1][0]);
            r = max(r,intervals[i][1]);
        }
        else{
            res.push_back({l, r});
            l = intervals[i][0];
            r = intervals[i][1];
        }
    }
    res.push_back({l, r});
    return res;
}