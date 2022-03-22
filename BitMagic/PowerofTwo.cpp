bool powerofTwo(long long n){
	if(n == 0) {
		return false;        
	}
	int k = 0;
	while(n > 0) {
		if((n & 1) == 1) {
			++k;
		}
		if(k > 1) {
			return false;
		}
		n = n >> 1;
	}
	return true;
}