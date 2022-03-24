void reverse(vector<int> &n, int s, int e) {
	while(s<e){
		int t=n[s];
		n[s]=n[e];
		n[e]=t;
		s++;
		e--;
	}
}

void rightRotateArrayByK(vector<int>& n,int k) {
	int l=n.size();
	k=k%l;
	r(n,0,l-k-1);
	r(n,l-k,l-1);
	r(n,0,l-1);
}