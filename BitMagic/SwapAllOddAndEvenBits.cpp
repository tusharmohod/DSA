unsigned int swapAllOddAndEvenBits(unsigned int n) {
	unsigned int temp = n;
	unsigned int f = 3;
	while(n > 0) {
		if(((n & 1) == 1) && (((n >> 1) & 1) == 0)) {
			temp = (temp ^ f);
		}
		else if(((n & 1) == 0) && (((n >> 1) & 1) == 1)) {
			temp = (temp ^ f);
		}
		f = f << 2;
		n = n >> 2;
	}
	return temp;
}