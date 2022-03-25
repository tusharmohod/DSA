bool canThreePartsEqualSum(vector<int>& arr) {
	int s=0,c=0,cs=0;
	for(int i=0;i<arr.size();i++){
		s+=arr[i];
	}
	if(s%3!=0){
		return false;
	}
	s=s/3;
	for(int i=0;i<arr.size();i++){
		cs+=arr[i];
		if(cs==s){
			c++;
			cs=0;
		}
	}
	if(c>=3) return true;
	return false;
}