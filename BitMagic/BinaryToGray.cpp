int binaryToGray(int n) {
	int res = n ^ (n >> 1);
	return res;
}