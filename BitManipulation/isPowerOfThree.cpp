bool isPowerOfThree(int n) {
	if(n<1){
		return false;
	}
	if(n==1){
		return true;
	}
	int x=ceil(log(n)/log(3));
	if(pow(3,x)==n){
		return true;
	}
	return false;
}