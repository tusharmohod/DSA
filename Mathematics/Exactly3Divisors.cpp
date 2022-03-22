int exactly3Divisors(int N) {
	int res = 0;
	int count = 0;
	if (N == 1) {
		return 0;
	}
	bool flag = false;
	for(int j = 2; (j*j) <= N; j++) {
		for(int i = 2; (i*i) <= j; i++) {
			if(j%i == 0) {
				flag = true;
				break;
			}
		}
		if(!flag) {
			++res;
		}
		flag = false;
	}
	return res;
}