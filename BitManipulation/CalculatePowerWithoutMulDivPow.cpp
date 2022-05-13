int calculatePowerWithoutMulDivPow(int n) {
	if(n < 0) {
		n = -n;
	}
	int pow = 0, res = 0;
	int temp = n;

	while(temp) {
		if(temp & 1) {
			r += (num << pow);
		}
		pow++;
		temp >>= 1;
	}

	return res;
}