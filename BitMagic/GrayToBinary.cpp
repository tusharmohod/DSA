int grayToBinary(int n) {
	if(n == 0) {
		return 0;
	}
	int temp = n;
	int res = 0;
	while(temp > 0) {
		res = res ^ temp;
		temp = temp >> 1;
	}
	return res;
}