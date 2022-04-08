int threeSumClosest(vector <int> & arr, int target) {
    sort(arr.begin(), arr.end());
    int n = arr.size(), res = 0, ans = INT_MAX, s, e, sum = 0;
    for (int i = 0; i < n; i++) {
        s = i + 1;
        e = n - 1;
        while (s < e) {
            sum = arr[s] + arr[e] + arr[i];
            if (sum == target) {
                return target;
            } else if (sum > target) {
                if (ans > (sum - target)) {
                    ans = sum - target;
                    res = sum;
                }
                e--;
            } else {
                if (ans > (target - sum)) {
                    ans = target - sum;
                    res = sum;
                }
                s++;
            }
        }
    }
    return res;
}