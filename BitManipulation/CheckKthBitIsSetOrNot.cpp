bool checkKthBit(int n, int k) {
	return ((n != 0) && ((n & (1 << (k))) != 0));
}