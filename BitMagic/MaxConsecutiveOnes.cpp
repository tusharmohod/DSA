int maxConsecutiveOnes(int N) {
	int res = 0;
	int count = 0;
	while(N > 0) {
		if((N & 1) == 1) {
			++count;
			if(count > res) {
				res = count;
			}
		}
		else if ((N & 1) == 0) {
			count = 0;
		}
		N = N >> 1;
	}
	return res;
}