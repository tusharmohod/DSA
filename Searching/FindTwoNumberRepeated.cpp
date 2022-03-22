vector<int> findTwoNumberRepeated (int arr[], int N) {
	vector<int> res;
	int n = N + 2;
	
	for(int i = 0; i < n; i++) {
		int num = abs(arr[i]);
		if(arr[num - 1] > 0) {
			arr[num - 1] *= -1;
		}
		else {
			res.push_back(num);
		}
	}
	
	return res;
}