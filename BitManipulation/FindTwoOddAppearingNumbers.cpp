void findTwoOddAppearingNumbers(int *arr, int n) {
	int XOR = 0;
	int r1 = 0;
	int r2 = 0;
	
	for(int i = 0; i < n; i++) {
		XOR = XOR ^ arr[i];
	}
	
	int sn = XOR & ~(XOR - 1);
	
	for(int i = 0; i < n; i++) {
		if(arr[i] & sn) {
			r1 = r1 ^ arr[i];
		}
		else {
			r2 = r2 ^ arr[i];
		}
	}
	
	cout << r1 << " " << r2 << endl;
}