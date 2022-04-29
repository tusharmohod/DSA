int countTotalSetBitsFrom1ToN(int n) {
	if(n == 0) {
		return 0;
	}
	int res = 0;
	while(n > 0) {
		int rp = (log(n) / log(2));
		res = res +  (1 << (rp - 1)) * rp;
		res = res + (n - (1 << (rp)) + 1);
		n = n - (1 << rp);    
	}
		
	return res;
}