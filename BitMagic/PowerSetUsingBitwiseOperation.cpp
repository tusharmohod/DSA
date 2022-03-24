void powerSetUsingBitwiseOperation(string str) {
	int n = str.length();
	int power = (1 << n);
	
	for(int i = 0; i < power; i++) {
		for(int j = 0; j < n; j++) {
			if((i & (1 << j)) != 0) {
				cout << str[j];
			}
		}
		cout << endl;
	}
}