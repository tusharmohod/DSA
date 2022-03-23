int findLCM(int a, int b) {
	int gcd = findGCD(a, b);
	
	return (a * b) / gcd;
}