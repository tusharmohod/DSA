int SuperPow(int a, vector<int>& b) {
	int p=0,r=1;
	int x=1140; // This is from Fermat-Euler Theorem 
	int m=1337;
	for(int i=0;i<b.size();i++){
		p=((10*p)+b[i])%x;
	}
	a=a%m;
	while(p>0){
		if(p&1){
			r=(r*a)%m;
		}
		a=(a*a)%m;
		p=p>>1;
	}
	return r;
}