int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    int r = 0;
    map<int, int> m;
    for(int k : nums3) {
        for(int l : nums4) {
            m[(k + l)]++;
        }
    }
    
    for(int i : nums1) {
        for(int j : nums2) {
            r += m[-(i + j)];
        }
    }
    return r;
}