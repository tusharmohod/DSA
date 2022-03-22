int digitalRoot(int n) {
	if(n == 0) {
		return 0;
	}
	int ret = (n % 10) + digitalRoot(n / 10);
	if(ret/10!=0) {
		ret = (ret/10) + (ret % 10);
	}
	return ret;
}