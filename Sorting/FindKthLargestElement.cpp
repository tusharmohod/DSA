int partition(vector<int>& a, int l, int r, int p){
	int t;
	t = a[p];
	a[p] = a[r];
	a[r] = t;
	int pivot = r;
	int i = l - 1;
	for(int j = l; j <= (r - 1);j++){
		if(a[j] <= a[pivot]){
			i++;
			int t1 = a[j];
			a[j] = a[i];
			a[i] = t1;
		}
	}
	t = a[i + 1];
	a[i + 1] = a[pivot];
	a[pivot] = t;
	return i + 1;
}

int findKthLargestElement(vector<int>& a, int k) {
	int n = a.size();
	
	if(k > n){
		return -1;
	}
	
	int l = 0, 
	int r = n - 1;
	
	while(l <= r){
		int rp = l + (rand() % (r - l + 1));
		int p = partition(a, l, r, rp);
		if(p == (n-k)){
			return a[p];
		}
		if(p > (n - k)){
			r = p - 1;
		}
		else if(p < (n - k)){
			l = p + 1;
		}
	}
	
	return -1;
}