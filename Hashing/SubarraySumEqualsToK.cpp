int subarraySumEqualsToK(vector<int>& nums, int k) {
	unordered_map<int, int> m;
	int s=0,r=0;
	m[0]=1;
	for(int i=0;i<nums.size();i++){
		s+=nums[i];
		if(m.find(s-k)!=m.end()){
			r+=m[s-k];
		}
		m[s]++;
	}
	return r;
}