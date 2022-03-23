bool isNumberLucky(int n) {
	static int c = 2;
	if(c > n) {
		return true;
	}
	if(n % c == 0) {
		return false;
	}
	n = n - (n / c);
	c++;
	return isLucky(n);
}