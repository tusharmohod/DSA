static bool comp(vector < int > & a, vector < int > & b) {
    if (a[0] < b[0]) return true;
    if (a[0] == b[0]) {
        return a[1] < b[1];
    }
    return false;
}

int eraseOverlapIntervals(vector < vector < int >> & intervals) {
    int n = intervals.size();
    sort(intervals.begin(), intervals.end(), comp);

    int r = intervals[0][1];
    int res = 0;
    for (int i = 1; i < n; i++) {
        if (intervals[i][0] < r) {
            res++;
            r = min(r, intervals[i][1]);
        } else {
            r = intervals[i][1];
        }
    }
    return res;
}