int iterativePower(int n, int p) {
	int r = 1;
	int cr = 1;
	while(n > 0) {
		if(n & 1) {
			r = r * cr;
		}
		n /= 2;
		cr = cr * p;
	}
	return r;
}