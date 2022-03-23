int powerUsingRecursion(int n,int p) {
	if(p == 0) {
		return 1;
	}
	if(p == 1) {
		return n;
	}
	int x = powerUsingRecursion(n, p/2);
	if(p & 1) {
		return x * x * n;
	}
	else {
		return x * x;
	}
}