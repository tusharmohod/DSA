bool isPossible(vector<int>& weights, int m, int days) {
	int k = 1;
	int sum = 0;
	int n = weights.size();
	
	for(int i = 0; i < n; i++) {
		if((sum + weights[i]) > m) {
			k++;
			sum = weights[i];
		}
		else {
			sum += weights[i];
		}
	}
	
	if(k <= days) {
		return true;
	}
	
	return false;
}

int capacityToShipPackagesWithKDays(vector<int>& weights, int days) {
	int sum = 0;
	int mx = 0;
	int n = weights.size();
	
	for(int i = 0; i < n; i++) {
		sum += weights[i];
		mx = max(mx, weights[i]);
	}
	
	int s = mx;
	int e = sum;
	int m;
	int res;
	
	while(s <= e) {
		m = (s + e) / 2;
		if(isPossible(weights, m, days)) {
			res = m;
			e = m - 1;
		}    
		else {
			s = m + 1;
		}
	}
	
	return res;
}