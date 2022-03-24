int buyStockAndSell3(vector<int>& prices) {
	int b1=INT_MAX, s1=0, b2=INT_MIN, s2=0;
	int n=prices.size();
	for(int i=0;i<n;i++){
		b1=min(b1,prices[i]);
		s1=max(s1,prices[i]-b1);
		b2=max(b2,s1-prices[i]);
		s2=max(s2,prices[i]+b2);
	}
	return s2;
}