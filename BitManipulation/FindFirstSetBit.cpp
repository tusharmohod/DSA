unsigned int findFirstSetBit(int n) {
	if(n == 0) {
		return 0;
	}
	unsigned int res = (n & (~(n - 1)));
	unsigned int fout = log(res)/log(2);
	return fout+1;
}