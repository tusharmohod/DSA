int iterativePower(int n, int p) {
	int r = 1;
	
	while(p > 0) {
		if(n & 1) {
			r = n;
		}
		p /= 2;
		n = n * n;
	}
	
	return r;
}