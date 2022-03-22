int sumOfDigitsOfANumber(int n) {
	if(n==0) {
		return 0;
	}
	int res = 0;
	res = (n%10) + sumOfDigitsOfANumber(n/10);
	return res;
}