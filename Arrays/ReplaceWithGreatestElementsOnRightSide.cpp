vector<int> replaceWithGreatestElementsOnRightSide(vector<int>& arr) {
	int n=arr.size();
	int l=arr[n-1];
	for(int i=n-2;i>=0;i--){
		if(arr[i]>l){
			int t=l;
			l=arr[i];
			arr[i]=t;
		}
		else {
			arr[i]=l;
		}
	}
	arr[n-1]=-1;
	return arr;
}