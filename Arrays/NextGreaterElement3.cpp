int nextGreaterElement3(int m) {
    int count[10] = {0};
    long n = m;
    int prev = -1;
    int curr = -1;
    while(n > 0) {
        curr = n % 10;
        n = n / 10;
        count[curr]++;
        if(prev > curr) {
            int next = curr + 1;
            while(count[next] == 0) {
                next++;
            }
            count[next]--;
            n = (n * 10) + next;
            
            for(int i = 0; i < 10; i++) {
                while(count[i]-- > 0) {
                    n = (n * 10) + i;
                }
            }
            
            return (n > INT_MAX) ? -1 : n;
        }
        prev = curr;
    }
    return -1;
}