int x[8] = {1, 2, 2, 1, -1, -1, -2, -2};
int y[8] = {2, 1, -1, -2, 2, -2, 1, -1};
int mod = 1000000007;

bool isValid(int &i, int &j, int &k, int &n, int &m) {
    return (i + x[k] >= 0 && i + x[k] < n && j + y[k] >= 0 && j + y[k] < m);
}

long long blackAndWhite(int n, int m) {
    long long ans = 0;
    long long total = n * m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            long long possible = 0;
            for (int k = 0; k < 8; k++) {
                if (isValid(i, j, k, n, m)) {
                    possible++;
                }
            }
            ans += (total - possible - 1) % mod;
            ans = ans % mod;
        }
    }
    return ans;
}