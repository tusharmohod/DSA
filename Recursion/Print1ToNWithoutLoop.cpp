void print1ToNWithoutLoop(int N) {
	if(N==0) {
		return;
	}
	if(N!=0) {
		print1ToNWithoutLoop(N-1);
	}
	cout<<N<<" ";
}