void printPrimeFactors(int n) {
	if(n <= 1) {
		cout << "No Prime Factors" << endl;
	}
	
	for(int i = 2; (i * i) <= n; i++) {
		while(n % i == 0) {
			cout << i << " ";
			n /= i;
		}
	}
	
	if(n > 1) {
		cout << n << endl;
	}
}