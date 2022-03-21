int binarySearch(vector<int>& arr, int target, bool isStartIndex) {
    int s = 0;
    int n = arr.size();
    int e = n - 1;
    int m;
    
    while(s <= e) {
        m = s + ((e - s) / 2);
        if(arr[m] < target) {
            s = m + 1;
        }
        else if(arr[m] > target) {
            e = m - 1;
        }
        else {
            if(isStartIndex) {
                if((m == 0) || (arr[m] != arr[m - 1])) {
                    return m; 
                }
                else {
                    e = m - 1;
                }
            }
            else {
                if((m == n - 1) || (arr[m] != arr[m + 1])) {
                    return m;
                }
                else {
                    s = m + 1;
                }
            }
        }
    }
    return -1;
}

int countNumberOfOccurrence(vector<int>& nums, int target) {
    
    int startIndex = binarySearch(nums, target, true);
    if(startIndex == -1) {
        return 0;
    }
    int endIndex = binarySearch(nums, target, false);
    return endIndex - startIndex + 1;
}