vector<vector<int>> findFourSum(vector<int>& arr, int target) {
    vector<vector<int>> r;
    int n = arr.size();
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) {
            continue;
        }
        for (int j = i + 1; j < n; j++) {
            if ((j > (i + 1)) && arr[j] == arr[j - 1]) {
                continue;
            }
            int sum = target - (arr[i] + arr[j]);
            int s = j + 1;
            int e = n - 1;
            while (s < e) {
                int csum = arr[s] + arr[e];
                if (csum == sum) {
                    r.push_back({arr[i], arr[j], arr[s], arr[e]});
                    if (arr[s] == arr[e]) {
                        break;
                    }
                    int x = arr[s];
                    int y = arr[e];
                    while (x == arr[s]) {
                        s++;
                    }
                    while (y == arr[e]) {
                        e--;
                    }
                } else if (csum > sum) {
                    e--;
                } else {
                    s++;
                }
            }
        }
    }
    return r;
}