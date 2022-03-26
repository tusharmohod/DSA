bool isPowerOfFour(int n) {
	if(n<=0) { 
		return false;
	}
	int x=sqrt(n);
	if(x*x!=n){
		return 0;
	}
	return ((n&(n-1))==0);
}