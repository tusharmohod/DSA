double powerForDoubleAndNegative(double x, int n) {
	double r = 1.0;
	
	if(n == 0) {
		return r;
	}
	
	if(n < 0) {
		n = abs(n);
		x = (1 / x);
	}
	
	while(n > 0) {
		if(n & 1) {
			r = r * x;
		}
		n /= 2;
		x = x * x;
	}
	
	return r;
}