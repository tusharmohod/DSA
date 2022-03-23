int modInverse(int a, int m) {
	for(int k = 1; k <= m; k++) {
		if ((a * k) % m == 1) {
			return k;
		}    
	}
	return -1;
}