int buyStockAndSell2(vector<int>& pr) {
	int minp=INT_MAX;
	int maxp=0;
	for(int i=0;i<pr.size();i++){
		if(pr[i]<minp){
			minp=pr[i];
		}
		else if(maxp<(pr[i]-minp)){
			maxp=pr[i]-minp;
		}
	}
	return maxp;
}