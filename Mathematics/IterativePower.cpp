int iterativePower(int n, int p) {
	int r = 1;
	
	while(p > 0) {
		if(p & 1) {
			r = r * n;
		}
		p = p >> 1;
		n = n * n;
	}
	
	return r;
}