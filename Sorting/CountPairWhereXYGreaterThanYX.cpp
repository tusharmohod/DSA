int getIndex(int y[], int n, int e) {
	int l = 0;
	int r = n - 1;
	int res = -1;
	while(l <= r) {
		int m = (l + r) / 2;
		if(y[m] > e) {
			res = m;
			r = m - 1;
		}
		else {
			l = m + 1;
		}
	}
	return res;
}

long long countPairsWhereXYGreaterThanYX(int x[], int y[], int m, int n){
	int zero = 0, one = 0, two = 0, three = 0, four=0;
	sort(x, x + m);
	sort(y, y + n);
	for(int i = 0; i < n; i++) {
		if(y[i] == 0) {
			zero++;
		}
		if(y[i] == 1) {
			one++;
		}
		if(y[i] == 2) {
			two++;
		}
		if(y[i] == 3) {
			three++;
		}
		if(y[i]==4) {
			four++;
		}
	}
	
	long long res=0;
	for(int i = 0; i < m; i++) {
		if(x[i] == 0) {
			continue;
		}
		else if(x[i] == 1) {
			res += zero;
		}
		else if(x[i] == 2) {
			int ind = getIndex(y, n, x[i]);
			if(ind != -1) {
				res += (n - ind);
			}
			res += zero;
			res += one;
			res -= three;
			res -= four;
		}
		else {
			int ind = getIndex(y, n, x[i]);
			if(ind != -1) {
				res += (n - ind);
			}
			res += zero;
			res += one;
			if(x[i] == 3) {
				res += two;
			}
		}
	}
	return res;
}