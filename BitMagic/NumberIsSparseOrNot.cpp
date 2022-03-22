bool numberIsSparseOrNot(int n) {
	bool res = false;
	int c = 0;
	while(n > 0) {
		if((n & 1) == 1) {
			if(c == 0) {
				c = 1;    
			}
			else if (c == 1){
				return false;
			}
		}
		else if((n & 1) == 0) {
			c = 0;
		}
		n = n >> 1;
	}
	return true;
}