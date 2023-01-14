struct Triplet {
    int value;
    int aindex;
    int aposindex;
    
    Triplet(int x, int y, int z) {
        value = x;
        aindex = y;
        aposindex = z;
    }
};

struct cmp {
    bool operator() (Triplet &a, Triplet &b) {
        return a.value > b.value;
    }
};

vector<int> mergeKSortedArrays(vector<vector<int>> arr, int k) {
    priority_queue<Triplet, vector<Triplet>, cmp> pq;
    vector<int> ans;
    
    for (int i = 0; i < k; i++) {
        pq.push(Triplet(arr[i][0], i, 0));
    }
    
    while (pq.empty() == false) {
        Triplet tp = pq.top();
        pq.pop();
        int value = tp.value;
        int aindex = tp.aindex;
        int aposindex = tp.aposindex;
        ans.push_back(value);
        int nextIndex = aposindex + 1;
        if (nextIndex < arr[aindex].size()) {
            pq.push(Triplet(arr[aindex][nextIndex], aindex, nextIndex));
        }
    }
    
    return ans;
}