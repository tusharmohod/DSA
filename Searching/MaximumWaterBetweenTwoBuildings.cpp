int MaximumWaterBetweenTwoBuildings(int height[], int n) { 
	int l = 0;
	int r = n - 1;
	int res = INT_MIN;
	int cr = 0;
	
	while(l <= r) {
		cr = min(height[l], height[r]) * (r - l - 1);
		res = max(res, cr);
		if(height[l] > height[r]) {
			r--;
		}
		else {
			l++;
		}
	}
	return res;
} 