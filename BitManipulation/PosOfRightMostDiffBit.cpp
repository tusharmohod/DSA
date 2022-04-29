int posOfRightMostDiffBit(int m, int n) {
	int res = (m ^ n);
	int theBit = (res & (~(res - 1)));
	int fout = log(theBit)/log(2);
	return fout + 1;
}