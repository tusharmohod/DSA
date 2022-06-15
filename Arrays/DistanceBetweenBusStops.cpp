int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
    int res = 0;
    int i = start;
    int j = start;
    int di = 0;
    int dj = 0;
    int n = distance.size();
    while(i != destination || j != destination) {
        if(i != destination) {
            di += distance[i];
            i = (i + 1) % n;
        }
        if(j != destination) {
            j = (n + j - 1) % n;
            dj += distance[j];
        }
    }
    res = min(di, dj);
    return res;
}