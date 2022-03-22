int countPairsWithSumEqualsX(int arr[], int n, int target) {
	int s = 0;
	int e = n - 1;
	int res = 0;
	
	while(s < e) {
		if((arr[s] + arr[e]) == target) {
			int cs = 1;
			int ce = 1;
			
			while(arr[s] == arr[s + 1]) {
				cs++;
			}
			while(arr[e] == arr[e - 1]) {
				ce++;
			}
			
			// unique pairs
			return min(c1, c2);
			
			// non-unique pairs
			return c1 * c2;
		}
		else if((arr[s] + arr[e]) > target) {
			e--;
		}
		else {
			s++;
		}
	}
	
	return res;
}