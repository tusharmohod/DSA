void cycleSortDistinct(int arr[], int n) {
	for(int cs = 0; cs < (n - 1); cs++) {
		int curr = arr[cs];
		int pos = cs;
		int t;
		
		for(int i = cs + 1; i < n; i++) {
			if(arr[i] < curr) {
				pos++;
			}
		}
		
		swap(arr[pos], curr);
		
		while(pos != cs) {
			pos = cs;
			
			for(int i = cs + 1; i < n; i++) {
				if(arr[i] < curr) {
					pos++;
				}
			}
			
			swap(arr[pos], curr);
		}
	}
}