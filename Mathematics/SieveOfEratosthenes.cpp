int sieveOfEratosthenes(int n) {
	if(n <= 1) {
		return 0;
	}
	
	vector<bool> isPrime(n + 1, true);
	int r = 0;
	
	for(int i = 2; i <= n; i++) {
		if(isPrime[i]) {
			cout << i << endl;
			for(int j = (i * i); j <= n; j = j + i) {
				isPrime[j] = false;
			}
		}
	}
	
	return r;
}