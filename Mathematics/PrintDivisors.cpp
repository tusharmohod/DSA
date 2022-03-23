void printDivisors(int n) {
	int i;
	
	for(i = 1; (i * i) <= n; i++) {
		if(n % i == 0) {
			cout << i << endl;
		}
	}
	
	for( ; i >= 0; i--) {
		if(n % i == 0) {
			cout << n / i << endl;
		}
	}
}