void efficientPrintPrimeFactors(int n) {
	if(n <= 1) {
		cout << "No Prime Factors" << endl;
	}
	
	while(n % 2 == 0) {
		cout << 2 << endl;
		n /= 2;
	}
	
	while(n % 3 == 0) {
		cout << 3 << endl;
		n /= 3;
	}
	
	for(int i = 5; (i * i) <= n; i++) {
		while(n % i == 0) {
			cout << i << endl;
			n /= i;
		}
		
		while(n % (i + 2) == 0) {
			cout << i + 2 << endl;
			n /= (i + 2);
		}
	}
	
	if(n > 1) {
		cout << n << endl;
	}
}