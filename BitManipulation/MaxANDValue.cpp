int maxANDValue(int arr[], int N) {
	int res = 0;
	int pattern = 0;
	int count = 0;
	for(int i = 16; i >= 0; i--) {
		pattern = (res | (1 << i));
		count = 0;
		for(int j = 0; j < N; j++) {
			if((pattern & arr[j]) == pattern) {
				++count;
			}
		}
		if(count >= 2) {
			res = (res | (1 << i));
		}
	}
	return res;
}